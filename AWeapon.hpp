#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>
#include <string>


class AWeapon{
public:
	AWeapon(const std::string &name, int apcost,int damage);
	virtual ~AWeapon();
	const std::string & getName()const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const=0;


protected:
	const std::string name;
	int damagePoints;
	int actionCost;
};

#endif