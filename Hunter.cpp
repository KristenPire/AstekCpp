#include "Hunter.hh"

Hunter::Hunter(const std::string& name,  int level, const std::string& weapon) : Character(name, level), Warrior(name,level,weapon,"Hunter"){
	std::cout << _name << "is born from a tree" << std::endl;
	_class = "Hunter";
	_race = "Elf";
	_hp = 100;
	_strength = 9;
	_stamina = 9;
	_intelligence = 5;
	_spirit = 6;
	_agility = 25;
	_range = CLOSE;
}

Hunter::~Hunter(){}

int Hunter::RangeAttack(){
	_range = RANGE;
	_stamina -= 25;
	int damage = 20 + _agility;
	std::cout << _name << " uses his bow" << std::endl;
	return damage;
}

void Hunter::RestorePower(){
	_stamina = 100;
	std::cout << _name << " meditates" << std::endl;
}