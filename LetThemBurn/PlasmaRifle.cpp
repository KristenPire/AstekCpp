#include "PlasmaRifle.hpp"





	PlasmaRifle::PlasmaRifle(const std::string &name="Plasma Rifle",int apcost = 5, int damage=21):AWeapon(name,apcost,damage){



	}



	void PlasmaRifle::attack() const{

		std::cout << " *piouu piouuuuuu piouuuu* " << std::endl;

	}