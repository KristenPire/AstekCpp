#include "Character.hpp"

#include <string>
#include <iostream>


Character::Character(const std::string &name, int level) : _name(name), _race("Koala")
{
	_level = level;
	_PV = 100;
	_class = "Character";

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
		_power -= 10;
		std::cout<<_name<<" strikes with a wooden stick !"<<std::endl;
		return (10+_strength);
	}
	else
	{
		std::cout<<_name<<" out of power"<<std::endl;
		return 0;
	}
	
}

int Character::RangeAttack()
{
	if (_power-10>=0)
	{
		_power -= 10;
		std::cout<<_name<<" tosses a stone !"<<std::endl;
		return (5+_strength);
	}
	else
	{
		std::cout<<_name<<" out of power"<<std::endl;
		return 0;
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
	std::cout<<_name<<" takes a potion"<<std::endl;
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
	std::cout<<_name<<" eats"<<std::endl;
}


void Character::TakeDamage(int damage)
{
	
	if (_PV<damage)
	{
		//std::cout<<_name<<" takes "<<_PV<<" damage !"<<std::endl;
		_PV =0;
		std::cout<<_name<<" out of combat..."<<std::endl;
	}
	else
	{
		_PV -= damage;
		std::cout<<_name<<" takes "<<damage<<" damage !"<<std::endl;

	}
	
}