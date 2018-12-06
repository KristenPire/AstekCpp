#ifndef WARRIOR_HPP
#define WARRIOR_HPP

#include "Character.hpp"

#include <string>

class Warrior
: public Character
{
private:
	const std::string _weapon;


public:
	Warrior(const std::string &name, int level, const std::string weapon);
	~Warrior();

	int CloseAttack();
	int RangeAttack();

	void Heal();
	void RestorePower();

};

#endif