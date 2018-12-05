#include "AWeapon.hpp"
#include "PowerFist.hpp"

#include <iostream>
#include <string>


PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{
	
}

PowerFist::~PowerFist()
{
	std::cout<<_name<<" destroyed..."<<std::endl;
}

void PowerFist::attack()const
{
	std::cout<<"Pschhhh... SBAM !!!"<<std::endl;
	std::cout<<std::endl;
}