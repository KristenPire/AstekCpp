#include "Paladin.hpp"


Paladin::Paladin(const std::string &name,int level):Character(name,level), Warrior(name,level,"hammer"), Priest(name,level){
	std::cout<< " the light falls on  "<< _name <<std::endl;
	_race="Human";
	_stamina=10;
	_spirit=10;
	_agility=2;
	_strength=9;
	_intelligence=10;
};

int Paladin::Intercept(){
	return this->CloseAttack();
};