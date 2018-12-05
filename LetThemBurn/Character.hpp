#ifndef CHARACTER
#define CHARACTER
#include <iostream>
#include <string>
#include "AWeapon.hpp"
#include "AEnemy.hpp"

class Character
{

private:
const std::string _name;
int _AP;
AWeapon* _weapon;

public:
	Character(const std::string &name);
	~Character();
	void recoverAP();
	void equip(AWeapon *weapon);
	void attack(AEnemy *enemy);
	const std::string& getName() const;
	
};

#endif