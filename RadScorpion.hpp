#include <iostream>
#include <string>
#ifndef AENEMY_LD
#define AENEMY_LD
#include "AEnemy.hpp"
#endif

class RadScorpion : public AEnemy{
	private:
		RadScorpion(const RadScorpion &) = delete;
	
	public:
		RadScorpion();
		virtual ~RadScorpion();
	
};

