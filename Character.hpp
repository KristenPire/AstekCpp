#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>




class Character{
public:
	Character(const std::string name, int level);
	virtual ~Character()=default;

	const std::string  & getName() const;
	int getLvl()const;
	int getPv() const;
	int getPower() const;

	enum AttackRange{
	CLOSE,
	RANGE
	};

	AttackRange _range;

	int CloseAttack();
	int RangeAttack();
	void Heal();
	void RestorePower();

	void TakeDamage (int damage);

protected:
	const std::string _name;
	std::string _race;
	int _level;
	int _stamina;
	int _spirit;
	int _agility;
	int _strength;
	int _intelligence;
	int _pv;
	int _energy;
	
};


#endif