#ifndef AWEAPON
#define AWEAPON


#include <iostream>
#include <string>

class AWeapon
{

protected:
	const std::string _name;
	int _damage;
	int _apcost;

public:
	AWeapon(const std::string &name,int apcost, int damage);
	~AWeapon()=default;
	const std::string& getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;
	
};


#endif