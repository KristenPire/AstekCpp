#include "Hunter.hpp"

Hunter::Hunter(std::string name, int level):Character(name,level),Warrior(name, level, "sword"){
	std::cout<< _name <<"is born from a tree"<<std::endl;
	_stamina=9;
	_spirit=6;
	_agility=25;
	_strength=9;
	_intelligence=5;
	_race="Elf";
};

void Hunter::RestorePower(){
	_energy=100;
	std::cout<<_name<< "meditates"<<std::endl;
};

int Hunter::RangeAttack(){
	if (_energy>=25){
		_energy-=25;
		std::cout<< _name<<" uses his bow "<<std::endl;
		return 20+_agility;
	}else {
		std::cout<<" attack failed, not enough energy"<<std::endl;
		return 0;
	}
};