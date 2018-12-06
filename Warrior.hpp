#ifndef WARRIOR
#define WARRIOR
#include "Character.hpp"

class Warrior:public virtual Character
{

protected:
	const std::string _Weapon;
public:
	Warrior(const std::string &name,const std::string& race,const std::string& Weapon, int level);
	virtual ~Warrior()=default;
	int CloseAttack();
	int RangeAttack();
	void Heal();
	void RestorePower();
};


#endif