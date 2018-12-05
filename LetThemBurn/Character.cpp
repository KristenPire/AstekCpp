#include "Character.hpp"



Character::Character(const std::string &name){
/*

	It starts off with 40 AP and loses AP according 
	to its weapon upon use.
*/


}

Character::~Character(){


}


void Character::recoverAP(){

/*

	It recovers 10 AP whenever recoverAP()
	 is called, up to a maximum of 40.

*/
}


void Character::equip(AWeapon *weapon){



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


	

}

const std::string& Character::getName() const{



}