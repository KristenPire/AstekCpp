#ifndef SUPERMUTANT
#define SUPERMUTANT
#include "AEnemy.hpp"

class SuperMutant:public AEnemy
{


public:
	SuperMutant(int hp = 170, const std::string &type = "Super Mutant");
	~SuperMutant();
	virtual void takeDamage(int damage);
};

#endif