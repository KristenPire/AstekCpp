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
	return this->_name;
}
int AWeapon::getAPCost()const
{
	return this->_AP;
}

int AWeapon::getDamage()const
{
	return this->_damage;
}

