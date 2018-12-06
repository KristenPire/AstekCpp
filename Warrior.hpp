#include <iostream>
#include <string>
#include "Character.hpp"
#ifndef WARRIOR
#define WARRIOR


class Warrior : public virtual Character{
	private:		
		const std::string _weaponName;
		
		Warrior(const Warrior &) = delete;
	
	public:
		Warrior(const std::string &name ,int level, const std::string &weaponName);
		virtual ~Warrior() = default;
		
		int CloseAttack();
		int RangeAttack();
		
		virtual void displayStats(); //For testing, redefined to display Warrior's weapon
};

#endif
