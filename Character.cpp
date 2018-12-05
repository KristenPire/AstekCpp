#include "Character.hpp"

	Character::Character(const std::string &name_):name(name_){
		actionp=40;
        weapon=NULL;
	};

	Character::~Character(){

	};

	void Character::equip(AWeapon *weapon){
        this->weapon=weapon;
	};

    void Character::attack (AEnemy *enemy){
        if(weapon!=NULL){
            std::cout<<this->name<<" attacks " << enemy->getType() <<" with a "<< this->weapon->getName()<<std::endl;
            if((this->actionp-(this->weapon->getAPCost()))>=0){
                this->actionp-=this->weapon->getAPCost();
                this->weapon->attack();
                enemy->takeDamage((this->weapon)->getDamage());
            }
            if (enemy->getHP()<=0){
                enemy->~AEnemy();
            }
        }
	};

	void Character::recoverAP(){
		if((this->actionp<30)){
			this->actionp+=10;
		}else{
			if((this->actionp>30)&&(this->actionp<40)){
                this->actionp=40;
			}
		}

	};

	const std::string & Character::getName() const{
        return this->name;
	};

    int Character::getActionp() const{
        return this->actionp;
    };

    AWeapon *Character::getWeapon(){
        return this->weapon;
    };

    std::ostream & operator<<(std::ostream & stream,Character & character){
        stream<<character.getName()<< " has "  << character.getActionp()<< " AP ";
        if (character.getWeapon()!=NULL){
            stream<< "and wields a "<< character.getWeapon()->getName()<<std::endl;
        }else{
            stream<< "and is unarmed"<<std::endl;
        }
        return stream;
    };
