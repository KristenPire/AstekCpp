#ifndef AWEAPON_HH
#define AWEAPON_HH

#include <iostream>
#include <string>

class AWeapon{
	public:
		AWeapon(const std::string& name = "", int apcost = 0, int damage = 0);
		virtual ~AWeapon();

		const std::string & getName() const;
		int getAPCost() const;
		int getDamage() const;
		virtual void attack() const = 0;

	protected:
		std::string _name;
		int _damage;
		int _apcost;
};

#endif