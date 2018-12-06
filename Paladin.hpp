#include "Priest.hpp"
#include "Warrior.hpp"

#ifndef PALADIN
#define PALADIN


class Paladin : public Warrior, public Priest{
	private:		
		Paladin(const Paladin &) = delete;
	
	public:
		Paladin(const std::string &name ,int level);
		virtual ~Paladin() = default;
		
		using Warrior::CloseAttack;
		using Priest::RangeAttack;
		using Priest::Heal;
		using Warrior::RestorePower;
		int Intercept();
		
};

#endif
