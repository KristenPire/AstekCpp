#include "Character.hh"

Character::Character(const std::string& name) : _name(name), _ap(40), _weapon(NULL){}
Character::~Character(){
	delete _weapon;
}

void Character::recoverAP(){
	if (_ap <= 30)
		_ap += 10;
	if (_ap>30 && _ap<40)
		_ap = 40;
}

void Character::equip(AWeapon* weapon){
	_weapon = weapon;
}

void Character::attack(AEnemy* enemy){
	if (_ap > _weapon->getAPCost()){
		std::cout << _name << " attacks " << enemy->getType() << " with a " << _weapon->getName() << std::endl;
		enemy->takeDamage(_weapon->getDamage());
		_weapon->attack();
		if (enemy->getHP() == 0){
			delete enemy;
		}
	}
}

const std::string& Character::getName() const{  return _name;  }
AWeapon* Character::getWeapon() const{  return _weapon;  }
int Character::getAP() const {  return _ap;  }

std::ostream& operator<<(std::ostream& os, const Character& hero){
	if (hero.getWeapon() != NULL)
		os << hero.getName() << " has " << hero.getAP() << " AP and wields a " << hero.getWeapon()->getName() << std::endl;
	else
		os << hero.getName() << " has " << hero.getAP() << " AP and is unarmed " << std::endl;		
	return os;
}