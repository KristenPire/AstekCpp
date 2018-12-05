#include "AEnemy.hpp"

#include <iostream>
#include <string>


AEnemy::AEnemy(int hp, const std::string &type) : _type(type)
{
	_HP = hp;
}

AEnemy::~AEnemy()
{
	std::cout<<_type<<" killed"<<std::endl;
}

void AEnemy::takeDamage(int damage)
{
	if(damage>0)
	{
		_HP-=damage;
	}
}

const std::string &AEnemy::getType()const
{
	return _type;
}

int AEnemy::getHP() const
{
	return _HP;
}