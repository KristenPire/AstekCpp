#include "Encryption.hpp"

Encryption::Encryption(IEncryptionMethod& method, void (IEncryptionMethod::*)(char) function):_method(method), _function(function){}

void Encryption::operator() (char c){
	return _method.*_function(c);
}
