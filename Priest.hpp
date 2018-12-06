#ifndef PRIEST_HPP
#define PRIEST_HPP

#include "Character.hpp"
#include <iostream>
#include <string>

class Mage: public Character{
	Mage(const std::string &name,int level);
	virtual  ~Mage()=default;
	virtual void RestorePower();
	virtual int CloseAttack();
	virtual int RangeAttack();
};


#endif