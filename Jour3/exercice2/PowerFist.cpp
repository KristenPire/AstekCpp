#include "AWeapon.hpp"
#include "PowerFist.hpp"

#include <iostream>
#include <string>


PowerFist::PowerFist() : AWeapon("Power Fist", 5, 50)
{
	
}

PowerFist::~PowerFist()
{
	std::cout<<this->_name<<" destroyed..."<<std::endl;
}

void PowerFist::attack()const
{
	std::cout<<"Pschhhh... SBAM !!!"<<std::endl;
}