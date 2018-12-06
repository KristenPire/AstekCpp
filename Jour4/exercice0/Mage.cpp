#include "Mage.hpp"
#include "Character.hpp"

#include <iostream>
#include <string>

Mage::Mage(const std::string &name, int level) : Character(name, level)
{
	_PV = 100;
	_class = "Mage";
	_race = "Gnome";

	_power = 100;
	_strength = 6;
	_stamina = 6;
	_intelligence = 12;
	_spirit = 11;
	_agility = 7;

	_currentRange = Character::CLOSE;

	std::cout<<_name<<" teleported "<<std::endl;
}

Mage::~Mage()
{
	std::cout<<"Mage "<<_name<<" is DEAD..."<<std::endl;
}

int Mage::CloseAttack()
{
	if (_power-10>=0)
	{
		_power -= 10;
		std::cout<<_name<<" blinks"<<std::endl;
		_currentRange = Character::RANGE;
		return 0;
	}
	else
	{
		std::cout<<_name<<" out of power"<<std::endl;
		return 0;
	}
}

int Mage::RangeAttack()
{
	if (_power-25>=0)
	{
		_power -= 25;
		std::cout<<_name<<" launches a fireball !"<<std::endl;
		return (20+_spirit);
	}
	else
	{
		std::cout<<_name<<" out of power"<<std::endl;
		return 0;
	}
}

void Mage::Heal()
{
	if (_PV + 50 <= 100)
	{
		_PV+=50;
	}
	else
	{
		_PV = 100;
	}
	std::cout<<_name<<" takes a potion"<<std::endl;
}

void Mage::RestorePower()
{
	if (_power + 50+_intelligence <= 100)
	{
		_power+=(50+_intelligence);
	}
	else
	{
		_power = 100;
	}
	std::cout<<_name<<" takes a mana potion"<<std::endl;
}

