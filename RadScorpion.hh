#ifndef RADSCORPION_HH
#define RADSCORPION_HH

#include "AEnemy.hh"

class RadScorpion : public AEnemy{
	public:
		RadScorpion();
		~RadScorpion();

		virtual void takeDamage(int damage);
};

#endif
