#include "Character.hpp"



Character::Character(const std::string &name,const std::string& race, int level):_name(name),_race(race),_level(level),_PV(MAX),_power(MAX),_range(CLOSE),_carac({5,5,5,5,5}){


}


const std::string&  Character::getName() const{


	return _name;

}

const std::array<int,5>& Character::getCarac() const{



	return _carac;
	
}

const std::string& Character::getRace() const{

	return _race;

}


int Character::getLvl() const{

	return _level;
}


int Character::getPV() const{

	return _PV;

}



int Character::getPower() const{


	return _power;
}


int Character::CloseAttack(){

	if(_power < 10)
	{

		std::cout << _name << " is too tired to attack " << std::endl;
		return 0;
	}
		std::cout << _name << " strikes with a wooden stick" << std::endl;
	return 10+_carac[Strength];

}

int Character::RangeAttack(){

	if(_power < 10)
	{

		std::cout << _name << " is too tired to attack " << std::endl;
		return 0;
	}
		std::cout << _name << " tosses a stone" << std::endl;
	
	return 5+_carac[Strength];

}

void Character::Heal(){

	std::cout << _name << " takes a potion" << std::endl;
	
	_PV = std::min(MAX, _PV+50);

}

void Character::RestorePower(){


	std::cout << _name << " eats some fried chicken" << std::endl;
	
	_power = std::min(MAX,100+_power);

}


void Character::TakeDamage(int damage){

	_PV = std::max(0, _PV - damage) ;
	std::cout << _name << " takes " << damage << " damage" << std::endl;
	
	if(_PV == 0){

		std::cout << _name << " out of combat" << std::endl;

	}
}


std::ostream& operator<<(std::ostream& a, const Character& C){

	a << "\nPersonnage: " << C.getName() << std::endl;
	a << "Niveau: " << C.getLvl() << std::endl;
	a << "Race" << C.getRace() << std::endl;
	a << "Hp: " << C.getPV() << "/" << MAX << std::endl;
	a << "Power: " << C.getPower() << "/" << MAX << std::endl;

	return a;
}