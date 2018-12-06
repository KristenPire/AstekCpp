#include "Character.hpp"



Character::Character(const std::string &name, int level):_name(name),_level(level){

	_PV = MAX;
	_power = MAX;

}


const std::string&  Character::getName() const{


	return _name;

}


const int Character::getLvl() const{

	return _level;
}


const int Character::getPV() const{

	return _PV;

}



cont int Character::getPower() const{


	return _power;
}


