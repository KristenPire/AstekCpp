#include <iostream>
#include <string>
#ifndef CHARCTER
#define CHARCTER
#include "Character.hpp"
#endif

class Mage : public Character{
	private:
		int _strength;
		int _stamina;
		int _intelligence;
		int _spirit;
		int _agility;
		
		
		Mage(const Mage &) = delete;
	
	public:
		Mage(const std::string &name ,int level);
		virtual ~Mage() = default;
		
		virtual int CloseAttack();
		virtual int RangeAttack();
		virtual void RestorePower();
		
		virtual void displayStats(); //For testing
};
