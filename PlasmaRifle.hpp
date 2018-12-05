#include <iostream>
#include <string>
#ifndef AWEAPON_LD
#define AWEAPON_LD
#include "AWeapon.hpp"
#endif

class PlasmaRifle : public AWeapon{
	private:
		PlasmaRifle(const PlasmaRifle &) = delete;
	
	public:
		PlasmaRifle();
		virtual ~PlasmaRifle() = default;
		virtual void attack() const;
	
};
