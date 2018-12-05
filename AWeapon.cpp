#include "AWeapon.hpp"

AWeapon::AWeapon(const std::string &name_, int apcost, int damage):name(name_){
	actionCost=apcost;
	damagePoints=damage;
};

AWeapon::~AWeapon(){

}

const std::string & AWeapon::getName()const{
	return name;
};

int AWeapon::getAPCost() const{
	return actionCost;
};

int AWeapon::getDamage() const{
	return damagePoints;
};

