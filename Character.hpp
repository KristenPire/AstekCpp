#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>
#include "AWeapon.hpp"
#include "AEnemy.hpp"

class Character{
public:
	Character(const std::string &name);
	~Character();
	void equip(AWeapon *weapon);
	void attack (AEnemy *enemy);
	void recoverAP();
	const std::string & getName() const;
private:
	const std::string name;
	int actionp;
	AWeapon * weapon;
};


#endif