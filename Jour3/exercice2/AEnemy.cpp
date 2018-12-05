#include "AEnemy.hpp"

#include <iostream>
#include <string>


AEnemy::AEnemy(int hp, const std::string &type) : _type(type)
{
	_HP = hp;
}

AEnemy::~AEnemy()
{
	std::cout<<this->_type<<" killed"<<std::endl;
}

void AEnemy::takeDamage(int damage)
{
	if(damage>0)
	{
		this->_HP-=damage;
	}
}

const std::string &AEnemy::getType()const
{
	return this->_type;
}

int AEnemy::getHP() const
{
	return this->_HP;
}