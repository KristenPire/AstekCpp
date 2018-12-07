#ifndef CESAR_HH
#define CESAR_HH

#include "IEncryptionMethod.hpp"

class Cesar : public IEncryptionMethod{
	public :
		Cesar();
		virtual ~Cesar();

		virtual void encryptChar(char plainchar);
		virtual void decryptChar(char cipherchar);
		virtual void reset();

		void setTrue();
		void setIterator();

	private:
		char _character;
		int _iterator;
		bool _first;
};

#endif