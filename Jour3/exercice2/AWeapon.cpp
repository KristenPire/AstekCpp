#include "AWeapon.hpp"

#include <iostream>
#include <string>

AWeapon::AWeapon(const std::string &name, int apcost, int damage) : _name(name)
{
	_AP = apcost;
	_damage = damage;
}

AWeapon::~AWeapon()
{
	std::cout<<this->getName()<<" destroyed..."<<std::endl;
}

const std::string &AWeapon::getName()const
{
	return _name;
}
int AWeapon::getAPCost()const
{
	return _AP;
}

int AWeapon::getDamage()const
{
	return _damage;
}

