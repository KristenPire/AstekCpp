#ifndef CHARACTER
#define CHARACTER

#include <iostream>
#include <string>
#include <array>


#define MAX 100


class Character
{
protected:
	const std::string _race;
	int _PV;
	int _power;
	std::array<int, 5> _carac;
	

public:
	const std::string _name;
	int _level;
	enum AttackRange {CLOSE,RANGE};
	enum carac {Strength,Stamina,Intelligence,Spirit,Agility};
	AttackRange _range;
	Character(const std::string &name,const std::string& race, int level);
	virtual ~Character()=default;
	const std::string& getName() const;
	int getLvl() const;
	int getPV() const;
	int getPower() const;
	int CloseAttack();
	int RangeAttack();
	void Heal();
	void RestorePower();
	void TakeDamage(int damage);
	
};


#endif