#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>

class Character{
private:
	Character(std::string name, int level);
	virtual ~Character()=default;
public:
	std::string _name;
	int _level;
};


#endif