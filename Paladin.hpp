#ifndef PALADIN
#define PALADIN

#include "Priest.hpp"
#include "Warrior.hpp"

class Paladin: public Priest, Warrior
{
public:
	Paladin(const std::string &name,const std::string& race,const std::string& Weapon, int level);
	virtual ~Paladin()=default;

	using Warrior::CloseAttack;
	using Warrior::RestorePower;
	using Priest::Heal;
	using Priest::RangeAttack;

	
};

#endif