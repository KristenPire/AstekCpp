#include "Character.hpp"

Character::Character(const std::string &name ,int level):_name(name), _level(level), _pv(100), _energy(100), _strength(5), _stamina(5), _intelligence(5), _spirit(5), _agility(5){}

const std::string &Character::getName() const{
	return _name;
}

int Character::getLvl() const{
	return _level;
}
int getPv const{
	return _pv;
}

int getPower() const{
	// QUID ??
}
