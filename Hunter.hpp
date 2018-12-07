#ifndef HUNTER_HPP
#define HUNTER_HPP

#include <iostream>
#include <string>
#include "Warrior.hpp"

class Hunter:protected Warrior{
public:
	Hunter(std::string name, int level);
	virtual~Hunter()=default;
	virtual void RestorePower();
	virtual int RangeAttack();
	using Warrior::Heal;
	using Warrior:: getName;
	using Warrior::getLvl;
	using Warrior::getPv;
	using Warrior::getPower;
	using Warrior ::CloseAttack;
	using Warrior::TakeDamage;
};




#endif