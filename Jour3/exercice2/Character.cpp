#include "Character.hpp"
#include <iostream>
#include <string>



Character::Character(const std::string &name) : _name(name)
{
	_AP = 40;
}

Character::~Character()
{
	std::cout<<"Oh no ! "<<this->_name<<" is dead !!!"<<std::endl;
}

void Character::recoverAP()
{
	if (this->_AP+10>=40)
	{
		this->_AP = 40;
	}
	else
	{
		this->_AP += 10;
	}
}