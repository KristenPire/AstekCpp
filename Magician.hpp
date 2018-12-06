#ifndef MAGICIAN
#define MAGICIAN

#include "Character.hpp"

class Magician: public virtual Character
{
public:
	Magician(const std::string &name,const std::string& race, int level);
	virtual ~Magician()=default;
	int CloseAttack();
	int RangeAttack();
	void Heal();
	void RestorePower();
};

#endif