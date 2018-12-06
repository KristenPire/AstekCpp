#ifndef HUNTER_HPP
#define HUNTER_HPP

#include "Character.hpp"
#include "Warrior.hpp"

#include <string>

class Hunter
: public virtual Character, public Warrior
{
public:
	Hunter(const std::string name, int level, std::string weapon);
	virtual ~Hunter() = default;

	using Warrior::CloseAttack;

	int RangeAttack();
	void Heal();
	void RestorePower();

};



#endif