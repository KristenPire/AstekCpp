#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>
#include "AEnemy.hpp"
#include "AWeapon.hpp"

class Character
{
public:
	Character(const std::string &name);
	~Character();
	void recoverAP();
	void equip(AWeapon *weapon);
	void attack(AEnemy *enemy);


	const std::string &getName()const;
	int getAP()const;
	AWeapon *getWeapon()const; 

private:
	const std::string _name;
	int _AP;
	AWeapon *_weapon;

};

std::ostream &operator<<(std::ostream &out, const Character &character);


#endif
