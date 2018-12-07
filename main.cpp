#include <string>
#include <iostream>

#include "Cesar.hpp"
#include "OneTime.hpp"
#include "IEncryptionMethod.hpp"

static void encryptString(IEncryptionMethod& encryptionMethod, std::string const& toEncrypt){
	size_t len = toEncrypt.size();
	
	encryptionMethod.reset();
	for(size_t i=0; i<len; ++i){
		encryptionMethod.encryptChar(toEncrypt[i]);
	}
	std::cout << std::endl;
}

static void decryptString(IEncryptionMethod& encryptionMethod, std::string const& toDecrypt){
	size_t len = toDecrypt.size();
	
	encryptionMethod.reset();
	for(size_t i=0; i<len; ++i){
		encryptionMethod.decryptChar(toDecrypt[i]);
	}
	std::cout << std::endl;
}

int main(){
	Cesar c;
	encryptString(c, "Je clair Luc, ne pas ? Ze voudrai un kekos !");
	decryptString(c, "Mi isirb Xhq, ew jvo ? Zf zszjyir fz ytafk !");
	encryptString(c, "KIKOO");
	encryptString(c, "LULZ XD");
	decryptString(c, "Ziqivun ea Ndcsg.Wji !");
	
	return 0;
}
