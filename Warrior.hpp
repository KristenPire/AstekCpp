#include <iostream>
#include <string>
#ifndef CHARCTER
#define CHARCTER
#include "Character.hpp"
#endif

class Warrior : public Character{
	private:
		const std::string _weaponName;
	
	public:
		Warrior(const std::string &name ,int level, const std::string &weaponName);
		virtual ~Warrior() = default;
		
		virtual int CloseAttack();
		virtual int RangeAttack();
};
