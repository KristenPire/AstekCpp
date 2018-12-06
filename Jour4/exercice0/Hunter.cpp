#include "Hunter.hpp"
#include "Warrior.hpp"
#include "Character.hpp"

#include <string>
#include <iostream>

Hunter::Hunter(std::string name, int level, std::string weapon) : Character (name, level), Warrior(name, level, weapon)
{
	_PV = 100;
	_class = "Hunter";
	_race = "Elf";

	_power = 100;
	_strength = 9;
	_stamina = 9;
	_intelligence = 5;
	_spirit = 6;
	_agility = 25;

	_currentRange = Character::CLOSE;

	std::cout<<_name<<" is born from a tree"<<std::endl;
}

int Hunter::RangeAttack()
{
	if (_power-25>=0)
	{
		_power -= 25;
		std::cout<<_name<<" uses his bow !"<<" and deals "<<(20+_agility)<<" damage"<<std::endl;
		return (20+_agility);
	}
	else
	{
		std::cout<<_name<<" out of power"<<std::endl;
		return 0;
	}
}

void Hunter::Heal()
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

void Hunter::RestorePower()
{
	_power = 100;
	std::cout<<_name<<" meditates"<<std::endl;
}