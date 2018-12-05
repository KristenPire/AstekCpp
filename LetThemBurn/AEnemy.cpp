
#include "AEnemy.hpp"



AEnemy::AEnemy(int hp, const std::string &type):_hp(hp),_type(type){



}


AEnemy::~AEnemy(){

	std::cout << "Pzzz, pom" << std::endl;

}

/*
void AEnemy::takeDamage(int damage){

	if(damage > 0)
	{
		_hp = max(_hp-damage,0);

	}

}*/

const std::string AEnemy::getType() const{

	return _type;

}

const int AEnemy::getHP() const{

	return _hp;

}