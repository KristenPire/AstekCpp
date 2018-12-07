#ifndef ONETIME_HH
#define ONETIME_HH

#include "IEncryptionMethod.hpp"

class OneTime : public IEncryptionMethod{
	public: 
		OneTime(const std::string& key);
		~OneTime();

		virtual void encryptChar(char plainchar);
		virtual void decryptChar(char cipherchar);
		virtual void reset();

		void setIterator();

	private:
		std::string _key;
		char _character;
		int _iterator;
};

#endif