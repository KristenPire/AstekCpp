#ifndef AENEMY_HH
#define AENEMY_HH

#include <iostream>
#include <string>

class AEnemy{
	public:
		AEnemy(int hp = 0, const std::string &type = "Enemy");
		virtual ~AEnemy();

		virtual void takeDamage(int damage);

		const std::string& getType() const;
		int getHP() const;

	protected:
		int _hp;
		std::string _type;
};

#endif
