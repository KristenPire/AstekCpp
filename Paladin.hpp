#ifndef PALADIN_HPP
#define PALADIN_HPP

#include <iostream>
#include <string>
#include "Character.hpp"
#include "Priest.hpp"
#include "Warrior.hpp"


class Paladin: public Warrior, public Priest{
public:
	Paladin(const std::string &name,int level);
	virtual ~Paladin()=default;
	
	//int CloseAttack();
	//int RangeAttack();
	//void heal();
	//void RestorePower();



private:

};


#endif