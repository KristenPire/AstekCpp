#ifndef POWERFIST
#define POWERFIST
#include "AWeapon.hpp"


class PowerFist: public AWeapon
{
public:
	PowerFist(const std::string &name = "Power Fist",int apcost = 8, int damage = 50);
	~PowerFist()=default;
	virtual void attack() const;
	
};

#endif