#ifndef WARRIOR_HPP
#define WARRIOR_HPP

#include<iostream>
#include <string>
#include"Character.hpp"

class Warrior : public Character{
public:
	Warrior(std::string name, int level,int stamina, int spirit, int agility, int strength, int intelligence);
	virtual ~Warrior()=default;
private:
};


#endif