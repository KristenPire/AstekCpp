#include "OneTime.hh"

OneTime::OneTime(const std::string& key){
	_iterator = 0;
	_key = key;
	_character = ' ';
}

OneTime::~OneTime(){}

void OneTime::encryptChar(char plainchar){
	int it = 0;
	char c =  ' ';

	if (plainchar>96 && plainchar<123){
		if(_key[_iterator]<123 && _key[_iterator]>96)
			it = _key[_iterator]-97;
		else
			it = _key[_iterator]-65;
		c = plainchar-it;
		if (c>122)
			_character = 97 + c%123;
		else
			_character = c;
		_iterator = (_iterator+1)%_key.size();
	}
	else if(plainchar>64 && plainchar<91){
		if(_key[_iterator]<123 && _key[_iterator]>96)
			it = _key[_iterator]-97;
		else
			it = _key[_iterator]-65;
		c = plainchar-it;
		if (c>90)
			_character = 65 + c%91;
		else
			_character = plainchar;
		_iterator = (_iterator+1)%_key.size();
	}
	else
		_character = plainchar;
	std::cout << _character;
}

void OneTime::decryptChar(char cipherchar){
}

void OneTime::reset(){
	_character=' ';
	setIterator();
}

void OneTime::setIterator(){
	_iterator = 0;
}