#ifndef MAGE_HPP
#define MAGE_HPP

#include "Character.hpp"

#include <string>

class Mage
: public virtual Character
{
protected:



public:
	Mage(const std::string &name, int level);
	~Mage();

	int CloseAttack();
	int RangeAttack();

	void Heal();
	void RestorePower();


};

#endif