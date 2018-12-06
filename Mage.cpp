#include "Mage.hpp"

Mage::Mage(const std::string &name, int level): Character(name, level){
	_strength = 6;
	_stamina = 6;
	_intelligence= 12;
	_spirit = 11;
	_agility = 7;
	
	std::cout << _name << " teleported" <<std::endl;
}


int Mage::CloseAttack(){
	if(Range==0){
		if(_power<10){
			std::cout << _name << " out of power" <<std::endl;
			return 0;
		}
		else{
			_power -= 10;
			std::cout << _name << " blinks" <<std::endl;
			Range = RANGE;
			return 0;
		}
	}
	else{
		std::cout << _name << " isn't in range for a close attack!" <<std::endl;
		return 0;
	}
	
}

int Mage::RangeAttack(){
	if(Range==1){
		if(_power<25){
			std::cout << _name << " out of power" <<std::endl;
			return 0;
		}
		else{
			_power -= 25;
			std::cout << _name << " launches a fire ball" <<std::endl;
			return 20+_spirit;
		}
	}
	else{
		std::cout << _name << " isn't in range for a ranged attack!" <<std::endl;
		return 0;
	}
}

void Mage::RestorePower(){
	if(_power < 50-_intelligence){
		_power += 50 + _intelligence;
	}	
	else _power = 100;	
	std::cout << _name << " takes a mana potion" <<std::endl;
}

