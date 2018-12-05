#ifndef PLASMARIFLE
#define PLASMARIFLE
#include "AWeapon.hpp"

class PlasmaRifle: public AWeapon
{
public:
	PlasmaRifle(const std::string &name ="Plasma Rifle" ,int apcost = 5, int damage = 21);
	~PlasmaRifle()=default;
	virtual void attack() const;
};


#endif