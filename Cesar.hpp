#ifndef CESAR
#define CESAR

#include "IEncryptionMethod.hpp"

class Cesar:public IEncryptionMethod
{
private:
	int _compteur;
public:
	Cesar();
	virtual ~Cesar()=default;
	virtual void encryptChar(char plainchar);
	virtual void decryptChar(char cipherchar) ;
	virtual void reset();
};


#endif 