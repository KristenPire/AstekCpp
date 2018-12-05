#include "AWeapon.hpp"

AWeapon::AWeapon(const std::string &name, int apcost, int damage): name_(name), apcost_(apcost), damage_(damage){}


std::string AWeapon::getName() const{
	return name_;
}

int AWeapon::getAPCost() const{
	return apcost_;
}

int AWeapon::getDamage() const{
	return damage_;
}
