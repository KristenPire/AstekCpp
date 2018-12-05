#include "SuperMutant.hpp"
#include "AEnemy.hpp"

#include <iostream>

SuperMutant::SuperMutant(): AEnemy(170, "Super Mutant")
{
	std::cout<<"GAAAAAAH !!!"<<std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout<<"Aaaaaarrrghhh..."<<std::endl;
}

void SuperMutant::takeDamage(int damage)
{
	if (damage-3>0)
	{
		this->_HP=(damage-3);
	}
}