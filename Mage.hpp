#include <iostream>
#include <string>

#include "Character.hpp"
#ifndef MAGE
#define MAGE

class Mage : public virtual Character{	// Declarer le virtul à la base du diamant, pas juste avant la classe qui duble-hérite	
	private:	
		Mage(const Mage &) = delete;
	
	public:
		Mage(const std::string &name ,int level);
		virtual ~Mage() = default;
		
		virtual int CloseAttack();
		virtual int RangeAttack();
		virtual void RestorePower();
		
};

#endif
