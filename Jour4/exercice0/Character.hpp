#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>


class Character
{
public:
	Character(const std::string &name, int level);
	virtual ~Character() = default;

	const std::string &getName();
	int getLVL() const;
	int getPV() const;
	int getPower() const;

	int CloseAttack();
	int RangeAttack();
	void Heal();
	void RestorePower();

	void TakeDamage(int damage);

	enum Range
	{
		CLOSE,
		RANGE
	};


protected:
	const std::string _name;
	std::string _race;
	int _level;
	int _PV;
	int _power;
	int _stamina;
	int _spirit;
	int _agility;
	int _strength;
	int _intelligence;
	Range _currentRange;

};






#endif