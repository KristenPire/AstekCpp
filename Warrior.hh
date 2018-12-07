#ifndef WARRIOR_HH
#define WARRIOR_HH

#include "Character.hh"

class Warrior : virtual public Character{
	public:
		Warrior(const std::string& name = "Thor", int level = 42, const std::string& weapon = "Harmer", const std::string& classe = "Warrior");
		virtual ~Warrior();

		int CloseAttack();
		int RangeAttack();

	private:
		std::string _weapon;
};

#endif