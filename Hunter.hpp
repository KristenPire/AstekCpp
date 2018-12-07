#include "Character.hpp"
#include "Warrior.hpp"

#ifndef HUNTER
#define HUNTER

class Hunter : protected Warrior{
	private:	
		Hunter(const Hunter &) = delete;
	
	public:
		Hunter(const std::string &name ,int level);
		virtual ~Hunter() = default;
		
		using Warrior::getName;
		using Warrior::getLvl;
		using Warrior::getPv;
		using Warrior::getPower;
		
		using Warrior::CloseAttack;
		virtual int RangeAttack();
		using Warrior::Heal;
		virtual void RestorePower();
		using Warrior::TakeDamage;
		using Warrior::displayStats;
		
		AttackRange Range;
};

#endif
