#include "PlasmaRifle.hh"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21){}
PlasmaRifle::~PlasmaRifle(){}

void PlasmaRifle::attack() const{
	std::cout << "* piouuu piouuu piouu *" << std::endl;
}