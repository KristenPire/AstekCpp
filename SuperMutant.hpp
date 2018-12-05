#include <iostream>
#include <string>
#ifndef AENEMY_LD
#define AENEMY_LD
#include "AEnemy.hpp"
#endif

class SuperMutant : public AEnemy{
	private:
		SuperMutant(const SuperMutant &) = delete;
	
	public:
		SuperMutant();
		virtual ~SuperMutant();
		virtual void takeDamage(int damage);
	
};
