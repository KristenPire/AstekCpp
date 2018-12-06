#include <iostream>
#include <string>
#ifndef CHARCTER
#define CHARCTER
#include "Character.hpp"
#endif

class Warrior : public Character{
	private:
		int _strength;
		int _stamina;
		int _intelligence;
		int _spirit;
		int _agility;
		
		const std::string _weaponName;
		
		Warrior(const Warrior &) = delete;
	
	public:
		Warrior(const std::string &name ,int level, const std::string &weaponName);
		virtual ~Warrior() = default;
		
		virtual int CloseAttack();
		virtual int RangeAttack();
		
		virtual void displayStats(); //For testing
};
