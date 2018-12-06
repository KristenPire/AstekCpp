#ifndef MAGICIAN
#define MAGICIAN

#include "Character.hpp"

class Magician: public Character
{
public:
	Magician(const std::string &name,const std::string& race, int level);
	virtual ~Magician()=default;
	virtual int CloseAttack();
	virtual int RangeAttack();
	virtual void Heal();
	virtual void RestorePower();
};

#endif