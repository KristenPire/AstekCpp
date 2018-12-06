#include "Warrior.hpp"

Warrior::Warrior(std::string name, int level,int stamina, int spirit, int agility, int strength, int intelligence):Character(name,level){
	_stamina=stamina;
	_spirit=spirit;
	_agility=agility;
	_strength=strength;
	_intelligence=intelligence;

};
