#include "PowerFist.hpp"

PowerFist::PowerFist():AWeapon("Power Fist",8,50){
};

PowerFist::~PowerFist(){

};

void PowerFist::attack() const {
	std::cout<<" * pschhhhhhh.....   SBAM!*"<<std::endl;
};
