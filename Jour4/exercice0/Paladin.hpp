#ifndef PALADIN_HPP
#define PALADIN_HPP

#include "Priest.hpp"
#include "Warrior.hpp"

#include <string>

class Paladin
: public  Warrior, public Priest
{
public:
	Paladin(const std::string &name, int level, std::string weapon);
	virtual ~Paladin()= default;

	using Warrior::CloseAttack;
	using Priest::RangeAttack;
	using Priest::Heal;
	
	int Intercept();



};

#endif