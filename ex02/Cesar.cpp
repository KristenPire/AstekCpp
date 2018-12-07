#include "Cesar.hpp"
	
	Cesar::Cesar(){
		numberCallsEncrypt=0;
	}

	void Cesar::encryptChar (char plainchar){
		int decalage =numberCallsEncrypt%26;
		bool maj=isupper(plainchar);
		char c= tolower(plainchar);
		if ((c>=97)&&(c<=(119-decalage))){
			c=c+3+decalage;
		}else{
			if ((c>=120-decalage)&&(c<=122)){
				c=(99+decalage)-(122-c);
			}
		}
		if (maj){
			c= toupper(c);
		}
		std::cout<< c ;
		numberCallsEncrypt=numberCallsEncrypt+1;
	};

	void Cesar::decryptChar(char cipherchar){
		int decalage =(numberCallsDecrypt)%26;
		bool maj=isupper(cipherchar);
		char c= tolower(cipherchar);
		if ((c>=100+decalage)&&(c<=122)){
			c=c-3-decalage;
		}else{
			if ((c>=97)&&(c<=99+decalage)){
				c=122-((99+decalage)-c);
			}
		}
		if (maj){
			c= toupper(c);
		}
		std::cout<< c ;
		numberCallsDecrypt=numberCallsDecrypt+1;
	};

	void Cesar::reset(){
		numberCallsEncrypt=0;
		numberCallsDecrypt=0;
	};

