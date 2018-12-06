#include "Warrior.hpp"

#include <string>
#include <iostream>

Warrior::Warrior(const std::string &name, int level, const std::string weapon) : Character(name, level), _weapon(weapon)
{
	_level = level;
	_PV = 100;
	_race = "Warrior";

	_power = 100;
	_strength = 12;
	_stamina = 12;
	_intelligence = 6;
	_spirit = 5;
	_agility = 7;

	_currentRange = Character::CLOSE;

	std::cout<<"I'm "<<_name<<" KKKKKKRRRRRREEEEEEOOOOOOORRRRRGGGGGG "<<std::endl;
}

Warrior::~Warrior()
{
	std::cout<<"Warrior "<<_name<<" is DEAD..."<<std::endl;
}

int Warrior::CloseAttack()
{
	if (_power-30>=0)
	{
		_power -= 30;
		std::cout<<_name<<" strikes with his "<< _weapon<<std::endl;
		return (20+_strength);
	}
	else
	{
		std::cout<<_name<<" out of power"<<std::endl;
		return 0;
	}
}

int Warrior::RangeAttack()
{
	if (_power-10>=0)
	{
		_power -= 10;
		std::cout<<_name<<" intercepts !"<<std::endl;
		_currentRange = Character::CLOSE; 
		return 0;
	}
	else
	{
		std::cout<<_name<<" out of power"<<std::endl;
		return 0;
	}
}

void Warrior::Heal()
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

void Warrior::RestorePower()
{
	if (_power + 100 <= 100)
	{
		_power+=100;
	}
	else
	{
		_power = 100;
	}
	std::cout<<_name<<" eats"<<std::endl;
}




