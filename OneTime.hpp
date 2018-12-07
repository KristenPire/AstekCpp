#include <iostream>
#include <string>
#include "IEncryptionMethod.hpp"

#ifndef ONETIME
#define ONETIME

class OneTime : public IEncryptionMethod{
	private:
		OneTime(const OneTime &) = delete;
		const std::string _key;
		size_t _index;
	
	public:
		OneTime(const std::string &key);
		~OneTime() = default;
		virtual void encryptChar(char plainchar);
		virtual void decryptChar(char cipherchar);
		virtual void reset();
};

#endif
