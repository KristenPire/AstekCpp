#include "PlasmaRifle.hpp"





	PlasmaRifle::PlasmaRifle(const std::string &name,int apcost, int damage):AWeapon(name,apcost,damage){



	}



	void PlasmaRifle::attack() const{

		std::cout << " *piouu piouuuuuu piouuuu* " << std::endl;

	}