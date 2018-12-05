#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle():AWeapon("Plasma Rifle",5,21){
};

PlasmaRifle::~PlasmaRifle(){

};

void PlasmaRifle::attack() const {
	std::cout<<" * pschhhhhhh.....   SBAM!*"<<std::endl;
};