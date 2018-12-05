#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include <iostream>
#include <string>
#include "AWeapon.hpp"


class PlasmaRifle : public AWeapon{
public:
	PlasmaRifle();
	virtual~PlasmaRifle();
	virtual void attack() const;
};


#endif
