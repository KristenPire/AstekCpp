#ifndef WARRIOR
#define WARRIOR
#include "Character.hpp"

class Warrior:public Character
{

protected:
	const std::string _Weapon;
public:
	Warrior(const std::string &name,const std::string& race,const std::string& Weapon, int level);
	virtual ~Warrior()=default;
	virtual int CloseAttack();
	virtual int RangeAttack();
	virtual void Heal();
	virtual void RestorePower();
};


#endif