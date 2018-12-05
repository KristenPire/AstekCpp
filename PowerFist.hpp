#include <iostream>
#include <string>
#ifndef AWEAPON_LD
#define AWEAPON_LD
#include "AWeapon.hpp"
#endif

class PowerFist : public AWeapon{
	private:
		PowerFist(const PowerFist &) = delete;
	
	public:
		PowerFist();
		virtual ~PowerFist() = default;
		virtual void attack() const;
	
};
