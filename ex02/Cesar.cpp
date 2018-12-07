#include "Cesar.hpp"


	void Cesar::encryptChar (char plainchar){
		bool maj=isupper(plainchar);
		char c= tolower(plainchar);
		if ((c>=97)&&(c<=119)){
			c=c+3;
		}else{
			if ((c>=120)&&(c<=122)){
				c=99-(122-c);
			}
		}
		if (maj){
			c= toupper(c);
		}
		std::cout<< c << std::endl;
	};

	void Cesar::decryptChar(char cipherchar){
		bool maj=isupper(cipherchar);
		char c= tolower(cipherchar);
		if ((c>=100)&&(c<=122)){
			c=c-3;
		}else{
			if ((c>=97)&&(c<=99)){
				c=122-(99-c);
			}
		}
		if (maj){
			c= toupper(c);
		}
		std::cout<< c << std::endl;
	};

	void Cesar::reset(){


	};

