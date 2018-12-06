#ifndef PALADIN_HH
#define PALADIN_HH

#include "Warrior.hh"
#include "Priest.hh"

class Paladin : public Warrior, public Priest{
	public:
		Paladin(const std::string & name = "Phiste", int level = 42, const std::string& weapon = "Harmer");
		virtual ~Paladin();

		int Intercept();

		using Warrior::CloseAttack;
		using Priest::Heal;
		using Priest::RangeAttack;
};

#endif