#include "OneTime.hpp"

OneTime::OneTime(const std::string &key):_key(key), _index(0){}

void OneTime::encryptChar(char plainchar){
	
	int k;
	if(_index>=_key.length()) _index =0; //On reboucle si on est arrivé à la fin de la clé
	if(_key[_index] >= 65 && _key[_index] <= 90){
		k = (_key[_index] - 65)%26;
	}
	if(_key[_index] >= 97 && _key[_index] <= 122){
		k = (_key[_index] - 97)%26;
	}
	//k est maintenant le nombre entre 0 et 26 correspondant à la lettre de la clé en cours d'utilisation
	if(plainchar >= 65 && plainchar <= 90){ //Uppercase
		int rem = (plainchar + k - 65) % 26;
		plainchar = 65 + rem;
	}
	if(plainchar >= 97 && plainchar <= 122){ //Lowercase
		int rem = (plainchar + k - 97) % 26;
		plainchar = 97 + rem;
	}
	std::cout << plainchar;
	++_index;
}

void OneTime::decryptChar(char cipherchar){
	int k;
	if(_index>=_key.length()) _index =0; //On reboucle si on est arrivé à la fin de la clé
	if(_key[_index] >= 65 && _key[_index] <= 90){
		k = (_key[_index] - 65)%26;
	}
	if(_key[_index] >= 97 && _key[_index] <= 122){
		k = (_key[_index] - 97)%26;
	}
	//k est maintenant le nombre entre 0 et 26 correspondant à la lettre de la clé en cours d'utilisation
	
	if(cipherchar >= 65 && cipherchar <= 90){ //Uppercase
		int rem = (cipherchar - k - 65) % 26; 
		if(rem<0) rem = rem + 26; // -3 modulo 26 = -3 en C++, il faut faire ça pour avoir -3 modulo 26 = 23
		cipherchar = 65 + rem;
	}
	if(cipherchar >= 97 && cipherchar <= 122){ //Lowercase
		int rem = (cipherchar - k - 97) % 26;
		if(rem<0) rem = rem + 26;
		cipherchar = 97 + rem;
	}
	std::cout << cipherchar;
	++_index;

}

void OneTime::reset(){
	_index = 0;
}
