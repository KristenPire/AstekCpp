#ifndef HUNTER_HH
#define HUNTER_HH

#include "Warrior.hh"

class Hunter : protected Warrior{
	public:
		Hunter(const std::string& name, int level, const& std::string& weapon);
		~Hunter();

		int RangeAttack();
		using Warrior::CloseRange;

};

#endif