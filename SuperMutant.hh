#ifndef SUPERMUTANT_HH
#define SUPERMUTANT_HH

#include "AEnemy.hh"

class SuperMutant : public AEnemy {
	public:
		SuperMutant();
		~SuperMutant();

		virtual void takeDamage(int damage);
};

#endif
