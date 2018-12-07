#include "IEncryptionMethod.hpp"
#include <iostream>

#ifndef CESAR
#define CESAR

class Cesar : public IEncryptionMethod{
	private:
		Cesar(const Cesar &) = delete;
		int _shift = 3;
	
	public:
		Cesar() = default;
		~Cesar() = default;
		virtual void encryptChar(char plainchar);
		virtual void decryptChar(char cipherchar);
		virtual void reset();
};

#endif
