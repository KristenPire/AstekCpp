#include "SuperMutant.hpp"


SuperMutant::SuperMutant(int hp, const std::string &type):AEnemy(hp,type){

	std::cout << "Gaah!!!! Me want smash headss" << std::endl;

}


SuperMutant::~SuperMutant(){

	std::cout << "Noooo, me want smash heads, erg" << std::endl;

}

void SuperMutant::takeDamage(int damage){
/*
	takeDamage to take 3 less damage points 
	than expected (these guys are tough).
*/
	damage -= 3;

	if(damage > 0)
		{
			_hp = std::max(_hp-damage,0);

		}

}