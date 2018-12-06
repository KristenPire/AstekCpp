#ifndef PRIEST
#define PRIEST
#include "Magician.hpp"


class Priest:public Magician
{
public:
	Priest(const std::string &name,const std::string& race, int level);
	virtual ~Priest() = default;
	virtual int CloseAttack();
	virtual int RangeAttack();
	virtual void Heal();
};

#endif