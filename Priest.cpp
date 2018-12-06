#include "Priest.hpp"


Priest::Priest(const std::string &name, int level): Mage(name, level){
	_strength = 4;
	_stamina = 4;
	_intelligence= 42;
	_spirit = 21;
	_agility = 2;
	
	std::cout << _name << " enters in the order" <<std::endl;
}


int Priest::CloseAttack(){
	if(Range==0){
		if(_power<10){
			std::cout << _name << " out of power" <<std::endl;
			return 0;
		}
		else{
			_power -= 10;
			std::cout << _name << " uses a spirit explosion" <<std::endl;
			Range = RANGE;
			return 10+_spirit;
		}
	}
	else{
		std::cout << _name << " isn't in range for a close attack!" <<std::endl;
		return 0;
	}
	
}


void Priest::Heal(){
	if(_power<10){
		std::cout << _name << " out of power" <<std::endl;
	}
	else{
		_power -= 10;
		if(_pv < 30){
			_pv += 70;
		}
		else _pv = 100;	
		std::cout << _name << " casts a little heal spell" <<std::endl;
	}
}

