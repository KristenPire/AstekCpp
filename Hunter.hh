#ifndef HUNTER_HH
#define HUNTER_HH

#include "Warrior.hh"

class Hunter : protected Warrior{
	public:
		Hunter(const std::string& name = "Fourfr", int level = 40, const std::string& weapon = "sword");
		virtual ~Hunter();

		int RangeAttack();
		void RestorePower();
		using Warrior::CloseAttack;
		using Warrior::Heal;
		using Warrior::TakeDamage;
};

#endif