#include "Character.hpp"
#include "Warrior.hpp"

#ifndef HUNTER
#define HUNTER

class Hunter : public Character, private Warrior{
	private:	
		Hunter(const Hunter &) = delete;
	
	public:
		Hunter(const std::string &name ,int level);
		virtual ~Hunter() = default;
		
		using Warrior::CloseAttack;
		virtual int RangeAttack();
		virtual void RestorePower();
		
		using Warrior::displayStats;
};

#endif
