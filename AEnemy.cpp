#include "AEnemy.hpp"

AEnemy::AEnemy(int hp, const std::string &type): hp_(hp), type_(type){}

const std::string &AEnemy::getType() const{ 
	return type_;
}

int AEnemy::getHP() const{
	return hp_;
}

void AEnemy::takeDamage(int damage){
	if (damage > 0){
		hp_ = hp_ - damage;
	}
}
