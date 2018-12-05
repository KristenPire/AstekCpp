#ifndef POWERFIST
#define POWERFIST
#include "AWeapon.hh"


class PowerFist: public AWeapon
{
public:
	PowerFist(const std::string &name,int apcost, int damage);
	~PowerFist()=default;
	virtual void attack() const;
	
};

#endif