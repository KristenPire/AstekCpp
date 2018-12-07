#ifndef ONETIME
#define ONETIME

#include "IEncryptionMethod.hpp"

class OneTime: public IEncryptionMethod
{
private:
	const std::string _key;
	int _pos;
	int _lenkey;

public:
	OneTime(const std::string &key);
	virtual ~OneTime() = default;
	virtual void encryptChar(char plainchar);
	virtual void decryptChar(char cipherchar) ;
	virtual void reset();
	
};

#endif