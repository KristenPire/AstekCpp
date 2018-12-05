#include "PowerFist.hpp"

PowerFist::PowerFist():AWeapon("Plasma Rifle",5,21){
};

PowerFist::~PowerFist(){

};

void PowerFist::attack() const {
	std::cout<<" * pschhhhhhh.....   SBAM!*"<<std::endl;
};