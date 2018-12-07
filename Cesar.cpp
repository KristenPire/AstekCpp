#include "Cesar.hpp"

Cesar::Cesar():_compteur(3){


}


void Cesar::encryptChar(char plainchar){
	int upper = 0;

	if(isupper(plainchar)){
		upper = 1;
		plainchar = tolower(plainchar);
	}


	char a = 'z'- plainchar;



	if( isalpha(plainchar) && (plainchar + _compteur > 'z')){

		if(upper!=1) { std::cout << char('a'+_compteur-a-1);}
		else { std::cout << char(toupper('a'+_compteur-a-1));}

	}

	else if(isalpha(plainchar)){
		if(upper!=1) {std::cout << char(plainchar+_compteur);}
		else {std::cout << char(toupper(plainchar+_compteur));}

	}

	else{

		std::cout << char(plainchar);

	}

	_compteur+=1;
	_compteur %= 26;
	 // std::cout << " " << _compteur << " " ;

}

void Cesar::decryptChar(char cipherchar) {
	int upper = 0;

	if(isupper(cipherchar)){
		upper = 1;
		cipherchar = tolower(cipherchar);
	}


	char a = cipherchar - 'a';

	if( isalpha(cipherchar) && cipherchar - _compteur < 'a'){

		if(upper!=1) std::cout << char('z'+a-_compteur+1);
		else std::cout << char(toupper('z'-_compteur+a+1));

	}

	else if(isalpha(cipherchar)){

		if(upper!=1) std::cout << char(cipherchar-_compteur);
		else  std::cout << char(toupper(cipherchar-_compteur));

	}
	else{

		std::cout << char(cipherchar);
	}

	_compteur = (_compteur+1)%26;

	return;

}

void Cesar::reset(){
	_compteur = 3;
	return;

}

