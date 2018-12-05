#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include <iostream>
#include <string>
#include "AEnemy.hpp"

class SuperMutant:public AEnemy{
public:
	SuperMutant();
	virtual ~SuperMutant();
	virtual void takeDamage(int damage);
};


#endif
