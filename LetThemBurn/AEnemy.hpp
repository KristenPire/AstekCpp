#ifndef AENEMY
#define AENEMY
#include <iostream>
#include <string>

class AEnemy
{
private:
	int _hp;
	std::string _type;

public:
	AEnemy(int hp, const std::string &type);
	~AEnemy();
	virtual void takeDamage(int damage);
	const std::string getType() const;
	int getHP() const;
	
};

#endif