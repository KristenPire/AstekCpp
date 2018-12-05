#include "PowerFist.hh"

PowerFist::PowerFist() : AWeapon("Power Fist", 21, 5){}
PowerFist::~PowerFist(){}

void PowerFist::attack() const{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}