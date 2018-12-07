#ifndef ONETIME_HPP
#define ONETIME_HPP

#include <iostream>
#include <string>

class OneTime: public IEncryptionMethod{
public:
	OneTime(const std:: string &key);
	virtual ~OneTime()=default;
	void encryptChar (char plainchar);
	void decryptChar(char cipherchar);
	void reset();

private:
	const std::string _key;
	int stringPos;
};


#endif 