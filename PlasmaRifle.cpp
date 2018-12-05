#include "PlasmaRifle.hh"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 21, 5){}
PlasmaRifle::~PlasmaRifle(){}

void PlasmaRifle::attack() const{
	std::cout << "* piouuu piouuu piouu *" << std::endl;
}