#ifndef HUNTER
#define HUNTER

#include "Warrior.hpp"

class Hunter:public Warrior
{
public:
	Hunter(const std::string &name,const std::string& race,const std::string& Weapon, int level);
	virtual ~Hunter()=default;
	virtual int RangeAttack();
	virtual void RestorePower();
	
};


#endif