#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "AEnemy.hpp"
#include <string>

class SuperMutant
:public AEnemy
{
public:
	SuperMutant();
	virtual ~SuperMutant();

	virtual void takeDamage(int damage);

};



#endif