#include "Paladin.hh"

Paladin::Paladin(const std::string& name, int level, const std::string& weapon) : Character(name, level),Warrior(name, level, weapon), Priest(name, level){
	_class = "Paladin";
	_race = "Human";
	_hp = 100;
	_strength = 9;
	_stamina = 10;
	_intelligence = 10;
	_spirit = 10;
	_agility = 2;
	_range = CLOSE;
}

Paladin::~Paladin(){}

int Paladin::Intercept(){
	return CloseAttack();
}