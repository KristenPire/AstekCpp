#include "Character.hpp"

// Character class

Character::Character(std::string name, int level):_name(name),_level(level),_pv(100),_energy(100){
	_range= Character::CLOSE;
	std::cout<< _name << " created"<<std::endl;
};

const std::string  & Character::getName() const{
	return _name;
};

int Character::getLvl()const{
	return _level;
};

int Character::getPv() const{
	return _pv;
};

int Character::getPower() const{
	return _energy;
};


int Character::CloseAttack(){
	std::cout<< _name<<" strikes with a wooden stick"<<std::endl;
	if (_energy>=10){
		_energy-=10;
		return 10+_strength;
	}else {
		std::cout<<" attack failed, not enough energy"<<std::endl;
		return 0;
	}

};

int Character::RangeAttack(){
	std::cout<< _name<<" tosses a stone"<<std::endl;
	if (_energy>=10){
		_energy-=10;
		return 5+_strength;
	}else {
		std::cout<<" attack failed, not enough energy"<<std::endl;
		return 0;
	}
};

void Character::Heal(){
	std::cout<<_name<< " takes a potion"<<std::endl;
	if (_pv<=50){
		_pv+=50;
	}else{
		_pv=100;
	}
};

void Character::RestorePower(){
	_pv=100;
	std::cout<< " eats "<<std::endl;
};

void Character::TakeDamage (int damage){
	
	if((_pv-damage)<=0){
		_pv=0;
		std::cout<<_name<< " out of combat "<< std::endl;
	}else{
		std::cout<<_name<<" takes "<< damage << " damage "<<std::endl;
		_pv-=damage;
	}
};


// Warrior class


Warrior::Warrior(std::string name, int level,int stamina, int spirit, int agility, int strength, int intelligence):Character(name,level){
	_stamina=stamina;
	_spirit=spirit;
	_agility=agility;
	_strength=strength;
	_intelligence=intelligence;

};

