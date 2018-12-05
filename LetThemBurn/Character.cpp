#include "Character.hpp"



Character::Character(const std::string &name):_name(name){
/*

	It starts off with 40 AP and loses AP according 
	to its weapon upon use.
*/
	_AP = 40;
	_weapon = NULL;

}

Character::~Character(){
	delete _weapon;

}


void Character::recoverAP(){

/*

	It recovers 10 AP whenever recoverAP()
	 is called, up to a maximum of 40.

*/
	_AP = std::min(_AP+10,40);
}


void Character::equip(AWeapon *weapon){
	_weapon = weapon;

}

void Character::attack(AEnemy *enemy){

/*
If it doesn’t have enough AP 
to use a weapon, the attack fails.
It prints
[ NAME ] attacks [ ENEMY_TYPE ] with
a ( WEAPON_NAME ]
when attack() is called, and then 
calls the current weapon’s attack() method.
If no weapon is equipped, attack() does nothing.
*/

	if(_weapon == NULL)
	{

		std::cout << "Hmm I can't attack, I need a weapon!" << std::endl;

		return;
	}

	if(_weapon->getAPCost() > _AP)
	{


		std::cout << "You don't have enough AP buddy, go get some clips " << std::endl;
		return;
	}
	else{

		std::cout << _name << " attacks " << enemy->getType() << " with a " << _weapon->getName() << std::endl;
		_weapon->attack();

		_AP -= _weapon->getAPCost();
		enemy->takeDamage(_weapon->getDamage());

		if(enemy->getHP() == 0){
			delete enemy;
		}
	}


}

const std::string& Character::getName() const{


	return _name;
}

const AWeapon* Character::getWeapon() const{


	return _weapon;
}


const int Character::getAP() const{


	return _AP;
}

std::ostream& operator<<(std::ostream& a,const Character& C){

	if(C.getWeapon()!= NULL){
		a << C.getName() << " has " << C.getAP() << " and wields a" << C.getWeapon()->getName() << std::endl;

	}
	else{
		a << C.getName() << " has " << C.getAP() << " and is unarmed" << std::endl;


	}

	return a;
}