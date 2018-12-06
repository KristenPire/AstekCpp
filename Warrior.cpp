#include "Warrior.hh"

Warrior::Warrior(const std::string& name, int level, const std::string& weapon) : Character(name, level){
	_class = "Warrior";
	_race = "Dwarf";
	_hp = 100;
	_strength = 12;
	_stamina = 12;
	_intelligence = 6;
	_spirit = 5;
	_agility = 7;
	_range = CLOSE;
	_weapon = weapon;

	std::cout << "I'm " << _name << " KKKKKKKKKKRRRRRRRRRRRRRREEEEEEEEOOOOOOORRRRGGGGGGG" << std::endl;
}

Warrior::~Warrior(){}

int Warrior::CloseAttack(){
	_range = CLOSE;
	_stamina -= 30;
	int damage = 20 + _strength;
	std::cout << _name << " strikes with his " << _weapon << std::endl;
	return damage;
}

int Warrior::RangeAttack(){
	_range = RANGE;
	_stamina -= 10;
	int damage = 0;
	std::cout << _name << " intercepts" << std::endl;
	return damage;
}