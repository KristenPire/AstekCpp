#include "Warrior.hpp"

Warrior::Warrior(std::string name, int level,std::string weaponName):Character(name,level),_weapon(weaponName){
	_stamina=12;
	_spirit=5;
	_agility=7;
	_strength=12;
	_intelligence=6;
	std::cout<< " I'm " << _name << "KKKKKKKRRRRRRRRREEEEEOOOOOOOORRRRRGGGGGG"<<std::endl;

};

int Warrior::RangeAttack(){
	if (_energy>=10){
		_energy-=10;
		std::cout<< _name<<" intercepts"<<std::endl;
		return 0;
	}else {
		std::cout<<" attack failed, not enough energy"<<std::endl;
		return 0;
	}
};

int Warrior::CloseAttack(){
	std::cout<< _name<<" strikes with his "<<_weapon <<std::endl;
	if (_energy>=30){
		_energy-=30;
		return 20+_strength;
	}else {
		std::cout<<" attack failed, not enough energy"<<std::endl;
		return 0;
	}
};

