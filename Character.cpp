#include "Character.hh"

Character::Character(const std::string& name, int level) : _name(name), _level(level){
	_class = "Character";
	_race = "Koala";
	_hp = 100;
	_strength = 5;
	_stamina = 5;
	_intelligence = 5;
	_spirit = 5;
	_agility = 5;
	_range = CLOSE;
	std::cout << _name << " arrive to the Academy" << std::endl;
}
Character::~Character(){}

const std::string& Character::getName(){  return _name;  }
int Character::getLvl() const{  return _level;  }
int Character::getPv() const{  return _hp;  }
int Character::getPower() const{  return _stamina;  }

int Character::CloseAttack(){
	_range = CLOSE;
	_stamina -= 10;
	int damage = 10 + _strength;
	std::cout << _name << " strikes with a wooden stick" << std::endl;
	return damage;
}

int Character::RangeAttack(){
	_range = RANGE;
	_stamina -= 10;
	int damage = 5+ _strength;
	std::cout << _name << " tosses a stone" << std::endl;
	return damage;
}

void Character::Heal(){
	if(_hp <= 50)
		_hp += 50;
	else
		_hp = 100;
	std::cout << _name << " takes a potion" << std::endl;
}

void Character::RestorePower(){
	_stamina += 100;
	std::cout << _name << " eats" << std::endl;
}

void Character::TakeDamage(int damage){
	_hp -= damage;
	if (_hp > 0)
		std::cout << _name << " takes " << damage <<  " damage" << std::endl;
	else
		std::cout << _name << " out of combat" << std::endl;
}