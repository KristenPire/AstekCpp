
#include "RadScorpion.hpp"


RadScorpion::RadScorpion(int hp, const std::string &type):AEnemy(hp,type){


}

void RadScorpion::takeDamage(int damage){


	if(damage > 0)
		{
			_hp = std::max(_hp-damage,0);

		}


}