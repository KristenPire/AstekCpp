#ifndef WARRIOR_HPP
#define WARRIOR_HPP

#include<iostream>
#include <string>
#include"Character.hpp"

class Warrior : public Character{
public:
	Warrior(std::string name, int level,std::string weaponName);
	virtual ~Warrior()=default;
	virtual int RangeAttack();
	virtual int CloseAttack();
private:
	const std::string _weapon;
};


#endif