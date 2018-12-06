#ifndef MAGE_HH
#define MAGE_HH

#include "Character.hh"

class Mage : virtual public Character{
	public:
		Mage(const std::string & name = "Fluffy", int level = 40);
		virtual ~Mage();

		int CloseAttack();
		int RangeAttack();
		void Heal();
		void RestorePower();
};

#endif