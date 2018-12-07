#ifndef CESAR_HPP
#define CESAR_HPP

#include "IEncryptionMethod.hpp"
#include <string>

class Cesar
: public IEncryptionMethod
{
public:
	Cesar();
	virtual ~Cesar() = default;

	// Encode the given character ,and display it.
	void encryptChar(char plainchar);
	// Decode the given character ,and display it.
	void decryptChar(char cipherchar);
	// Reset the internal values to their initial state.
	void reset();

	
private:
	int _baseshift;
	int _currshift;


};


#endif