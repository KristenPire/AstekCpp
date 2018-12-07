#include"OneTime.hpp"


	OneTime::OneTime(const std:: string &key):_key(key){
		stringPos=0;
	};


	void OneTime::encryptChar (char plainchar){
		bool maj=isupper(plainchar);
		char c= tolower(plainchar);
		if ((c>=97)&&(c<=122)){
			if ((c+tolower(key[stringPos])>=97)&& (c+tolower(key[stringPos])<=122){
				c=c+tolower(key[stringPos]);
			}else{
				c=97+((c+tolower(key[stringPos]))-122);
			}
		}

		if (maj){
			c= toupper(c);
		}
		std::cout<< c ;
		if (stringPos=string.length()-1){
			stringPos=0;
		}else{
			stringPos++;
		}
	};

	void OneTime::decryptChar(char cipherchar){
		bool maj=isupper(plainchar);
		char c= tolower(plainchar);
		if ((c>=97)&&(c<=122)){
			if ((c-tolower(key[stringPos])>=97)&& (c-tolower(key[stringPos])<=122){
				c=c-tolower(key[stringPos]);
			}else{
				c=122-(97-(c-tolower(key[stringPos])));
			}
		}
		if (maj){
			c= toupper(c);
		}
		std::cout<< c ;
		if (stringPos=string.length()-1){
			stringPos=0;
		}else{
			stringPos++;
		}
	};

	void OneTime::reset(){
		stringPos=0;
	};