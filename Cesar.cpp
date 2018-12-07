#include "Cesar.hh"

Cesar::Cesar(){
	_iterator = 3;
	_first = true;
	_character = ' ';
}

Cesar::~Cesar(){}

void Cesar::encryptChar(char plainchar){
	if (plainchar>96 && plainchar<123){
		if(_first){
			_character = plainchar+_iterator;
		}
		else{
			_character = ((plainchar+_iterator)%123);
			if(_character < 97)
				_character += 97;
		}
	}
	else if (plainchar>64 && plainchar<91){
		if(_first){
			_character = plainchar+_iterator;
		}
		else{
			_character = ((plainchar+_iterator)%91);
			if(_character < 65)
				_character += 65;
		}
	}
	else
		_character = plainchar;
	_iterator = (_iterator+1)%26;
	_first = false;
	std::cout << _character;
}

void Cesar::decryptChar(char cipherchar){
	if (cipherchar>96 && cipherchar<123){
		if(_first){
			_character = cipherchar-_iterator;
		}
		else{
			_character = ((cipherchar-_iterator)%123);
			if(_character < 97)
				_character = 122-(96-_character);
		}
	}
	else if (cipherchar>64 && cipherchar<91){
		if(_first){
			_character = cipherchar-_iterator;
		}
		else{
			_character = ((cipherchar-_iterator)%91);
			if(_character < 65)
				_character = 90-(64-_character);
		}
	}
	else
		_character = cipherchar;
	_iterator = (_iterator+1)%26;
	_first = false;
	std::cout << _character;
}

void Cesar::reset(){
	_character=' ';
	setTrue();
	setIterator();
}

void Cesar::setTrue(){
	_first = true;
}

void Cesar::setIterator(){
	_iterator = 3;
}