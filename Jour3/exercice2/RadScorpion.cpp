#include "RadScorpion.hpp"
#include "AEnemy.hpp"

#include <iostream>

RadScorpion::RadScorpion(): AEnemy(80, "RadScorpion")
{
	std::cout<<"*click click click*"<<std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout<<"*SPROTCH !*"<<std::endl;
}

/*
void RadScorpion::takeDamage(int damage)
{
	if (damage-3>0)
	{
		this->_HP-=(damage-3);
	}
}
*/