#include <iostream>
#include <string>

class Character{
	protected:
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
		
		
		virtual int CloseAttack();
		virtual int RangeAttack();
		virtual void Heal();
		virtual void RestorePower();
		void TakeDamage(int damage);
		
		virtual void displayStats(); //For testing
		
		enum AttackRange{
			CLOSE,
			RANGE
		};
		AttackRange Range;
};
	
	
