#include "Paladin.hpp"
#include "Priest.hpp"
#include "Warrior.hpp"
#include "Character.hpp"

#include <string>
#include <iostream>


Paladin::Paladin(const std::string &name, int level, std::string weapon) : Character(name, level), Warrior(name, level, weapon), Priest(name, level)
{
	_PV = 100;
	_class = "Paladin";
	_race = "Human";

	_power = 100;
	_strength = 9;
	_stamina = 10;
	_intelligence = 10;
	_spirit = 10;
	_agility = 2;

	_currentRange = Character::CLOSE;

	std::cout<<"Light falls on "<<_name<<std::endl;
}

int Paladin::Intercept()
{
	return Warrior::CloseAttack();
}