#ifndef CHARACTER_HPP
#define CHARACTER_HPP

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

private:
	const std::string _name;
	int _AP;
	AWeapon *equipped;

};


#endif
