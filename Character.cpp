#include "Character.hpp"

Character::Character(const std::string &name ,int level):_name(name), _level(level), _pv(100), _power(100), _strength(5), _stamina(5), _intelligence(5), _spirit(5), _agility(5), Range(CLOSE){}

const std::string &Character::getName() const{
	return _name;
}

int Character::getLvl() const{
	return _level;
}
int Character::getPv() const{
	return _pv;
}

int Character::getPower() const{
	return _power;
}



int Character::CloseAttack(){
	if(Range==0){
		if(_power<10){
			std::cout << _name << " out of power" <<std::endl;
			return 0;
		}
		else{
			_power -= 10;
			std::cout << _name << " strikes with a wooden stick" <<std::endl;
			return 10+_strength;
		}
	}
	else{
		std::cout << _name << " isn't in range for a close attack!" <<std::endl;
		return 0;
	}
	
}
int Character::RangeAttack(){
	if(Range==1){
		if(_power<10){
			std::cout << _name << " out of power" <<std::endl;
			return 0;
		}
		else{
			_power -= 10;
			std::cout << _name << " tosses a stone" <<std::endl;
			return 5+_strength;
		}
	}
	else{
		std::cout << _name << " isn't in range for a ranged attack!" <<std::endl;
		return 0;
	}
	
}
void Character::Heal(){
	if(_pv <50){
		_pv += 50;
	}
	else _pv = 100;	
	std::cout << _name << " takes a potion" <<std::endl;
}

void Character::RestorePower(){
	if(_power < 50){
		_power += 50;
	}	
	else _power = 100;	
	std::cout << _name << " eats" <<std::endl;
}

void Character::TakeDamage(int damage){
	_pv -= damage;
	std::cout << _name << " takes " << damage << " damage" << std::endl;
	if(_pv <= 0){
		std::cout << _name << " out of combat" << std::endl;
	}
}
