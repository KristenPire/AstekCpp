#include <string>
#include <iostream>

#include "Cesar.hpp"
#include "OneTime.hpp"
#include "Encryption.hpp"
#include "IEncryptionMethod.hpp"

#include <typeinfo>
#include "type.hpp"

static void encryptString(IEncryptionMethod& encryptionMethod, std::string const& toEncrypt){
	Encryption e(encryptionMethod, &IEncryptionMethod::encryptChar);
	
	encryptionMethod.reset();
	size_t len = toEncrypt.size();
	for(size_t i=0; i<len; ++i){
		e(toEncrypt[i]);
	}
	std::cout << std::endl;
}

static void decryptString(IEncryptionMethod& encryptionMethod, std::string const& toDecrypt){
	Encryption e(encryptionMethod, &IEncryptionMethod::decryptChar);
	
	encryptionMethod.reset();
	size_t len = toDecrypt.size();
	for(size_t i=0; i<len; ++i){
		e(toDecrypt[i]);
	}
	std::cout << std::endl;
}

int main(){
	Cesar c;
	
	OneTime o("DedeATraversLesBrumes");
	OneTime t("TheCakeIsALie");	
	
	encryptString(c, "Je clair Luc, ne pas ? Ze voudrai un kekos !");
	decryptString(c, "Mi isirb Xhq, ew jvo ? Zf zszjyir fz ytafk !");
	encryptString(c, "KIKOO");
	encryptString(c, "LULZ XD");
	decryptString(c, "Ziqivun ea Ndcsg.Wji !");
	
	encryptString(t, "Prend garde Lion, ne te trompes pas de voie !");
	encryptString(o, "De la musique et du bruit !");
	encryptString(t, "Kion li faras? Li studas kaj programas !");
	
	decryptString(t, "Iyipd kijdp Pbvr, xi le bvhttgs tik om ovmg !");
	decryptString(o, "Gi pa dunmhmp wu xg tuylx !");
	decryptString(t, "Dpsp vm xaciw? Pk cxcvad otq rrykzsmla !");
	
	//~ std::cout << typeid(&IEncryptionMethod::decryptChar).name() << std::endl;
	//~ std::string  q;
	//~ std::cout << typeid(q).name() << std::endl;
	
	//~ std::cout << type(&IEncryptionMethod::decryptChar) << std::endl;
	//~ std::cout << type(q) << std::endl;
	
	return 0;
}
