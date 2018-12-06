#ifndef CHARACTER
#define CHARACTER

#include <iostream>
#include <string>


#define MAX 100

class Character
{


private:
	const std::string _name;
	int _level;
	int _PV;
	int _power;

public:
	Character(const std::string &name, int level);
	virtual ~Character()=default;
	const std::string& getName() const;
	int getLvl() const;
	int getPV() const;
	int getPower() const;
	
};


#endif