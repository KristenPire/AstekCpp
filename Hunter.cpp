#include "Hunter.hpp"

Hunter::Hunter(const std::string &name, int level): Character(name, level), Warrior(name, level, "sword"){
	_strength = 9;
	_stamina = 9;
	_intelligence= 5;
	_spirit = 6;
	_agility = 25;
	
	std::cout << _name << " is born from a tree" <<std::endl;
}



int Hunter::RangeAttack(){
	if(Range==1){
		if(_power<25){
			std::cout << _name << " out of power" <<std::endl;
			return 0;
		}
		else{
			_power -= 25;
			std::cout << _name << " uses his bow" <<std::endl;
			return 20+_agility;
		}
	}
	else{
		std::cout << _name << " isn't in range for a ranged attack!" <<std::endl;
		return 0;
	}
}

void Hunter::RestorePower(){
	_power = 100;	
	std::cout << _name << " meditates" <<std::endl;
}
