#ifndef ONETIME_HPP
#define ONETIME_HPP

#include "IEncryptionMethod.hpp"

#include <string>

class OneTime
: public IEncryptionMethod
{
public:
	OneTime(const std::string &key);

	// Encode the given character ,and display it.
	void encryptChar(char plainchar);
	// Decode the given character ,and display it.
	//void decryptChar(char cipherchar);
	// Reset the internal values to their initial state.
	void reset();

private:
	std::string _basekey;
	std::string _currkey;
	int _pos;


};


#endif