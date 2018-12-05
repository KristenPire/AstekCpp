#ifndef PLASMARIFLE
#define PLASMARIFLE
#include "AWeapon.hpp"

class PlasmaRifle: public AWeapon
{
public:
	PlasmaRifle(const std::string &name,int apcost, int damage);
	~PlasmaRifle()=default;
	virtual void attack() const;
};


#endif