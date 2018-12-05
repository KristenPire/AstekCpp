#include "Character.hpp"


Character::Character(const std::string &name):name_(name), ap_(40), equipped_weapon(NULL) {}


void Character::recoverAP(){
	if(ap_<=30){
		ap_ += 10;
	}
	else{
		ap_ = 40;
	}
}


void Character::equip(AWeapon *weapon){
	AWeapon *ptr = weapon;
	equipped_weapon = ptr;
}

void Character::attack(AEnemy *enemy){
	if(equipped_weapon && ap_ >= equipped_weapon->getAPCost()){
		std::cout << name_ << " attacks " << enemy->getType() << " with a " << equipped_weapon->getName() << std::endl;
		ap_ -= equipped_weapon->getAPCost();
		equipped_weapon->attack();
		enemy->takeDamage(equipped_weapon->getDamage());
		if(enemy->getHP() <= 0){
			delete enemy;
		}
	}
}

const std::string &Character::getName() const{
	return name_;
}

int Character::getAP() const{
	return ap_;
}

const std::string &Character::getWeaponName() const{
	return equipped_weapon->getName();
}

bool Character::hasWeapon() const{
	return equipped_weapon;
}

