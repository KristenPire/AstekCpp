#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <string>

class AWeapon
{
public:
	AWeapon(const std::string &name, int apcost, int damage);
	virtual ~AWeapon();

	const std::string &getName()const;
	int getAPCost()const;
	int getDamage()const;

	virtual void attack()const=0;

protected:
	const std::string _name;
	int _damage;
	int _AP;
};




#endif