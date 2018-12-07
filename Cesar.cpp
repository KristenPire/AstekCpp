#include "Cesar.hpp"

void Cesar::encryptChar(char plainchar){
	if(plainchar >= 65 && plainchar <= 90){ //Uppercase
		int rem = (plainchar + _shift - 65) % 26;
		plainchar = 65 + rem;
	}
	if(plainchar >= 97 && plainchar <= 122){ //Lowercase
		int rem = (plainchar + _shift - 97) % 26;
		plainchar = 97 + rem;
	}
	std::cout << plainchar;
	++_shift;
}

void Cesar::decryptChar(char cipherchar){
	if(cipherchar >= 65 && cipherchar <= 90){ //Uppercase
		int rem = (cipherchar - _shift - 65) % 26; 
		if(rem<0) rem = rem + 26; // -3 modulo 26 = -3 en C++, il faut faire ça pour avoir -3 modulo 26 = 23
		cipherchar = 65 + rem;
	}
	if(cipherchar >= 97 && cipherchar <= 122){ //Lowercase
		int rem = (cipherchar - _shift - 97) % 26;
		if(rem<0) rem = rem + 26;
		cipherchar = 97 + rem;
	}
	std::cout << cipherchar;
	++_shift;

}

void Cesar::reset(){
	_shift = 3;
}
