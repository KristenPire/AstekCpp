#include <iostream>
#include <string>

class Character{
	private:
		const std::string _name;
		int _level;
		int _pv;
		int _energy;
		
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
		int getPv const;
		int getPower() const;

};
	
	
