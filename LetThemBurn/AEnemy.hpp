#ifndef AENEMY
#define AENEMY
#include <iostream>
#include <string>

class AEnemy
{
protected:
	int _hp;
	std::string _type;

public:
	AEnemy(int hp, const std::string &type);
	~AEnemy();
	virtual void takeDamage(int damage)=0;
	const std::string getType() const;
	const int getHP() const;
	
};

#endif