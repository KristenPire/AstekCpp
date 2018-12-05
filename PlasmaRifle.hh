#ifndef PLASMARIFLE_HH
#define PLASMARIFLE_HH

#include "AWeapon.hh"

class PlasmaRifle : public AWeapon{
	public:
		PlasmaRifle();
		~PlasmaRifle();

		virtual void attack() const;
};

#endif