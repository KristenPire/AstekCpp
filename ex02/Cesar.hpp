#ifndef CESAR_HPP
#define CESAR_HPP


#include <iostream>
#include <string>
#include "IEncryptionMethod.hpp"

class Cesar : public IEncryptionMethod{
public:
	Cesar();
	virtual ~Cesar()=default;
	void encryptChar (char plainchar);
	void decryptChar(char cipherchar);
	void reset();


private: 
	int numberCallsEncrypt;
	int numberCallsDecrypt;
};


#endif