#ifndef AENEMY_HPP
#define AENEMY_HPP

#include <iostream>
#include <string>

class AEnemy{
public:
	AEnemy (int hp, const std::string & type);
	virtual ~AEnemy();

	virtual void takeDamage(int damage);
	const std::string & getType() const;
	int getHP() const;
protected:
	const std::string type;
	int hitPoints;
};


#endif