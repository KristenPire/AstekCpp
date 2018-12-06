#include "Character.hpp"

#include <string>
#include <iostream>


Character::Character(const std::string &name, int level) : _name(name)
{
	_level = level;
	_PV = 100;

	_race = "Koala";

	_power = 100;
	_strength = 5;
	_stamina = 5;
	_intelligence = 5;
	_spirit = 5;
	_agility = 5;

	_currentRange = Character::CLOSE;
}

const std::string &Character::getName()
{
	return _name;
}

int Character::getLVL() const
{
	return _level;
}

int Character::getPV() const 
{
	return _PV;
}

int Character::getPower() const
{
	return _power;
}

int Character::CloseAttack()
{
	if (_power-10>=0)
	{
		_power -= 10,
		return (10+_strength);
	}
	else
	{
		std::cout<<_name<<" out of power"<<std::endl;
	}
	
}

int Character::RangeAttack()
{
	if (_power-10>=0)
	{
		_power -= 10,
		return (5+_strength);
	}
	else
	{
		std::cout<<_name<<" out of power"<<std::endl;
	}
}

void Character::Heal()
{
	if (_PV + 50 <= 100)
	{
		_PV+=50;
	}
	else
	{
		_PV = 100;
	}
}

void Character::RestorePower()
{
	if (_power + 100 <= 100)
	{
		_power+=100;
	}
	else
	{
		_power = 100;
	}
}


void Character::TakeDamage(int damage)
{
	std::cout<<_name<<" takes "<<damage<<" damage !"<<std::endl;
	_PV -= damage;
	if (_PV<=0)
	{
		std::cout<<_name<<" out of combat..."<<std::endl;
	}
}