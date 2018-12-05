#include "PowerFist.hpp"


PowerFist::PowerFist(const std::string &name,int apcost, int damage): AWeapon(name,apcost,damage){


}


void PowerFist::attack() const{

	std::cout << "*pschh.. SBAM!*" << std::endl;

}