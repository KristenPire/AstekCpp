#ifndef PRIEST_HPP
#define PRIEST_HPP

#include "Character.hpp"
#include <iostream>
#include <string>

class Mage: public virtual Character{
public:
	Mage(const std::string &name,int level);
	virtual  ~Mage()=default;
	virtual void RestorePower();
	virtual int CloseAttack();
	virtual int RangeAttack();
};

class Priest: public Mage{
public:
	Priest(const std::string &name,int level);
	virtual  ~Priest()=default;
	virtual int CloseAttack();
	virtual void Heal();
};


#endif