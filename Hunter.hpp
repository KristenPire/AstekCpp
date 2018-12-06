#ifndef HUNTER_HPP
#define HUNTER_HPP

#include <iostream>
#include <string>
#include "Warrior.hpp"

class Hunter:public Warrior{
public:
	Hunter(std::string name, int level);
	virtual~Hunter()=default;
	virtual void RestorePower();
	virtual int RangeAttack();

};




#endif