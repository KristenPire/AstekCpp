#include "AEnemy.hh"

AEnemy::AEnemy(int hp, const std::string &type) : _hp(hp), _type(type){}
AEnemy::~AEnemy(){}

void AEnemy::takeDamage(int damage){
	if (damage > 0){
		if(_hp >= damage)
			_hp -= damage;
		else
			_hp = 0;
	}
}

const std::string& AEnemy::getType()const {  return _type;  }
int AEnemy::getHP() const {  return _hp;  }
