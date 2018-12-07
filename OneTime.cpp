#include "OneTime.hpp"


OneTime::OneTime(const std::string &key):_key(key),_pos(0),_lenkey(key.size()){

}


void OneTime::encryptChar(char plainchar){

	int upper = 0;
	int pos;

	if(isupper(plainchar)){
		upper = 1;
		plainchar = tolower(plainchar);
		
	}

	if(isupper(_key[_pos])){
		pos = _key[_pos] - 65;
	}
	else{pos = _key[_pos] - 97;}
	char a = 'z'- plainchar;



	if( isalpha(plainchar) && (plainchar + pos > 'z')){

		if(upper!=1) { std::cout << char('a'+pos-a-1);}
		else { std::cout << char(toupper('a'+pos-a-1));}

	}

	else if(isalpha(plainchar)){
		if(upper!=1) {std::cout << char(plainchar+pos);}
		else {std::cout << char(toupper(plainchar+pos));}

	}

	else{

		std::cout << char(plainchar);

	}

	_pos = (_pos+1) % _lenkey;
	//std::cout << " " << _pos << " " ;


}

void OneTime::decryptChar(char cipherchar) {

	int upper = 0;
	int pos ;

	if(isupper(cipherchar)){
		upper = 1;
		cipherchar = tolower(cipherchar);
	}

	if(isupper(_key[_pos])){
		pos = _key[_pos] - 65;
	}
	else {pos = _key[_pos] - 97;}


	char a = cipherchar - 'a';

	if( isalpha(cipherchar) && cipherchar - pos < 'a'){

		if(upper!=1) std::cout << char('z'+a-pos+1);
		else std::cout << char(toupper('z'-pos+a+1));

	}

	else if(isalpha(cipherchar)){

		if(upper!=1) std::cout << char(cipherchar-pos);
		else  std::cout << char(toupper(cipherchar-pos));

	}
	else{

		std::cout << char(cipherchar);
	}

	_pos = (_pos+1)%_lenkey;

	return;

}

void OneTime::reset(){
	_pos = 0;

}

