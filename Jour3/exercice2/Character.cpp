#include "Character.hpp"
#include <iostream>
#include <string>



Character::Character(const std::string &name) : _name(name)
{
	_AP = 40;
	std::cout<<"I'm gonna kick some ass"<<std::endl;
}

Character::~Character()
{
	std::cout<<"Oh no ! "<<_name<<" is dead !!!"<<std::endl;
	delete _weapon;
}

void Character::recoverAP()
{
	if (_AP+10>=40)
	{
		_AP = 40;
	}
	else
	{
		_AP += 10;
	}
}

void Character::equip(AWeapon *weapon)
{
	std::cout<<_name<<" changes his weapon ! "<<std::endl;
	_weapon = weapon;
}

void Character::attack(AEnemy *enemy)
{
	if (_AP<_weapon->getAPCost())
	{
		std::cout<<"Not enough Action Points to attack !"<<std::endl;
	}
	else if (_weapon==NULL)
	{
		std::cout<<"NO WEAPON EQUIPPED"<<std::endl;
	}
	else
	{
		
		std::cout<<this->getName()<<" attacks "<<enemy->getType()<< " with a "<<this->getWeapon()->getName()<<std::endl<<std::endl;
		_weapon->attack();
		enemy->takeDamage(this->_weapon->getDamage());
		_AP -= _weapon->getAPCost();
		if (enemy->getHP()<=0)
		{
			delete enemy;
		}
	}
}


const std::string &Character::getName()const
{
	return this->_name;
}

int Character::getAP()const
{
	return this->_AP;
}

AWeapon *Character::getWeapon()const
{
	return _weapon;
}


std::ostream &operator<<(std::ostream &out, const Character& character)
{
	if( character.getWeapon()==NULL)
	{
		return out<<character.getName()<<" has "<<character.getAP()<<" AP and is unarmed"<<std::endl;
	}
	else
	{
		return out<<character.getName()<<" has "<<character.getAP()<<" AP and wields a "<<character.getWeapon()->getName()<<std::endl;
	}
}