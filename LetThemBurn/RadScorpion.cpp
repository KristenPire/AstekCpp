
#include "RadScorpion.hpp"


RadScorpion::RadScorpion(int hp, const std::string &type):AEnemy(hp,type){

	std::cout << " click click click "<< std::endl;
}


RadScorpion::~RadScorpion(){


	std::cout << " SPROTCH " << std::endl;

}

void RadScorpion::takeDamage(int damage){


	if(damage > 0)
		{
			_hp = std::max(_hp-damage,0);

		}


}