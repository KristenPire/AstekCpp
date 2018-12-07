#include "IEncryptionMethod.hpp"

#ifndef CESAR
#define CESAR

class Cesar : public IEncryptionMethod{
	private:
		Cesar(const Cesar &) = delete;
	
	public:
		Cesar() = default;
		~Cesar() = default;
		virtual void encryptChar(char plainchar);
		virtual void decryptChar(char cipherchar);
		virtual void reset();
};

#endif
