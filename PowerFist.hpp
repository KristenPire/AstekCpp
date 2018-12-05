#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include <iostream>
#include <string>
#include "AWeapon.hpp"

class PowerFist : public AWeapon{
	PowerFist();
	virtual~PowerFist();
	virtual void attack() const;
};



#endif