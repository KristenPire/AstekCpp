#include <iostream>
#include <string>

class Character{
	private:
		const std::string _name;
		int _level;
		int _pv;
		int _power;
		
		int _strength;
		int _stamina;
		int _intelligence;
		int _spirit;
		int _agility;
		
		Character(const Character &) = delete;
		
	
	public:	
		Character(const std::string &name ,int level);
		virtual ~Character() = default;
		const std::string &getName() const;
		int getLvl() const;
		int getPv() const;
		int getPower() const;
		
		
		int CloseAttack();
		int RangeAttack();
		void Heal();
		void RestorePower();
		void TakeDamage(int damage);
		
		enum AttackRange{
			CLOSE,
			RANGE
		};
		AttackRange Range;
};
	
	
