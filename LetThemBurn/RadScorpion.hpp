#ifndef RADSCORPION
#define RADSCORPION

#include "AEnemy.hpp"

class RadScorpion: public AEnemy
{
public:
	RadScorpion(int hp = 80, const std::string &type = "RadScorpion");
	~RadScorpion()=default;
	virtual void takeDamage(int damage);
	
};

#endif