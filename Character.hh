#ifndef CHARACTER
#define CHARACTER

#include <iostream>
#include <string>

enum AttackRange{
	CLOSE,
	RANGE
};

class Character{
	public:
		Character(const std::string& name = "Kreog", int level = 1);
		virtual ~Character();

		const std::string& getName();
		int getLvl() const;
		int getPv() const;
		int getPower() const;

		int CloseAttack();
		int RangeAttack();
		void Heal();
		void RestorePower();

		void TakeDamage(int damage);
	
	protected:
		std::string _name;
		int _level;
		std::string _class;
		std::string _race;
		int _hp;
		int _strength;
		int _stamina;
		int _intelligence;
		int _spirit;
		int _agility;
		AttackRange _range;
};

#endif