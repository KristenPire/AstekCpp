#include "Warrior.hpp"

Warrior::Warrior(const std::string &name, int level, const std::string &weaponName): Character(name, level), _weaponName(weaponName){
	_strength = 12;
	_stamina = 12;
	_intelligence= 6;
	_spirit = 5;
	_agility = 7;
	
	std::cout << "I'm " << _name << " KKKKKKKKKKRRRRRRRRRRRRRREEEEEEEEOOOOOOORRRRGGGGGGG" <<std::endl;
}


int Warrior::CloseAttack(){
	if(Range==0){
		if(_power<30){
			std::cout << _name << " out of power" <<std::endl;
			return 0;
		}
		else{
			_power -= 30;
			std::cout << _name << " strikes with his " << _weaponName <<std::endl;
			return 20+_strength;
		}
	}
	else{
		std::cout << _name << " isn't in range for a close attack!" <<std::endl;
		return 0;
	}
	
}

int Warrior::RangeAttack(){
	if(Range==1){
		if(_power<10){
			std::cout << _name << " out of power" <<std::endl;
			return 0;
		}
		else{
			_power -= 10;
			std::cout << _name << " intercepts" <<std::endl;
			Range = CLOSE;
			return 0;
		}
	}
	else{
		std::cout << _name << " isn't in range for a ranged attack!" <<std::endl;
		return 0;
	}
}


void Warrior::displayStats(){
	std::cout << "Name : " << _name << std::endl;
	std::cout << "Level : " << _level << std::endl;
	std::cout << "PV : " << _pv << std::endl;
	std::cout << "Energy : " << _power << std::endl;
	
	std::cout << "Weapon : " << _weaponName << std::endl;
	
	std::cout << "Strength : " << _strength << std::endl;
	std::cout << "Stamina : " << _stamina << std::endl;
	std::cout << "Intelligence : " << _intelligence << std::endl;
	std::cout << "Spirit : " << _spirit << std::endl;
	std::cout << "Agility : " << _agility << std::endl;
	
}
