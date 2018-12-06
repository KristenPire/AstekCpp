#ifndef PRIEST_HPP
#define PRIEST_HPP

#include "Mage.hpp"

#include <string>

class Priest
: public Mage
{
protected:



public:
	Priest(const std::string &name, int level);
	~Priest();

	int CloseAttack();
	int RangeAttack();

	void Heal();
	


};

#endif