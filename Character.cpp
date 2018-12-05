#include "Character.hpp"

	Character::Character(const std::string &name_):name(name_){
		actionp=40;
	};

	Character::~Character(){

	};

	void Character::equip(AWeapon *weapon){

	};

	void Character::attack (AEnemy *enemy){
		if((s->actionp-this->weapon.getAPCost()>=0){
			this->actionp-=this->weapon.getAPCost();
			enemy->takeDamage(this->weapon.getDamage());
		}
	};

	void Character::recoverAP(){
		if((this->actionp<30)){
			this->actionp+=10;
		}else{
			if((this->actionp>30)&&(this->actionp<40)){
				this.actionp=40;
			}
		}

	};

	const std::string & Character::getName() const{

	};