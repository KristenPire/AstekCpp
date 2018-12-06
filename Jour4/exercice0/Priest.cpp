#include "Priest.hpp"
#include "Mage.hpp"
#include "Character.hpp"

#include <iostream>
#include <string>

Priest::Priest(const std::string &name, int level) : Character(name, level), Mage(name, level)
{
	_PV = 100;
	_class = "Priest";
	_race = "Orc";

	_power = 100;
	_strength = 4;
	_stamina = 4;
	_intelligence = 42;
	_spirit = 21;
	_agility = 2;

	_currentRange = Character::CLOSE;

	std::cout<<_name<<" enters in the order "<<std::endl;
}

Priest::~Priest()
{
	std::cout<<"Priest "<<_name<<" is DEAD..."<<std::endl;
}

int Priest::CloseAttack()
{
	if (_power-10>=0)
	{
		_power -= 10;
		std::cout<<_name<<" uses a spirit explosion !"<<std::endl;
		_currentRange = Character::RANGE;
		return (10+_spirit);
	}
	else
	{
		std::cout<<_name<<" out of power"<<std::endl;
		return 0;
	}
}

int Priest::RangeAttack()
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

void Priest::Heal()
{
	if (_PV + 70 <= 100)
	{
		_PV+=70;
	}
	else
	{
		_PV = 100;
	}
	std::cout<<_name<<" casts a little heal spell"<<std::endl;
}


