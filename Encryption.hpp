#include  "IEncryptionMethod.hpp"
#include  <functional>

#ifndef ENCRYPION
#define ENCRYPTION

class Encryption : public IEncryptionMethod{
	private:
		Encryption(const Encryption &) = delete;
		
		IEncryptionMethod& _method;
		std::function<void(char)> _function;
	
	public:
		Encryption(IEncryptionMethod& method, void (IEncryptionMethod::*)(char) function);
		~Encryption() = default;
		virtual void operator() (char c);
	
};


#endif
