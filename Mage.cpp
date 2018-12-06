#include "Mage.hh"

Mage::Mage(const std::string & name, int level) : Character(name, level){
	_class = "Mage";
	_race = "Gnome";
	_hp = 100;
	_strength = 6;
	_stamina = 6;
	_intelligence = 12;
	_spirit = 11;
	_agility = 7;
	_range = CLOSE;

	std::cout << "I'm " << _name << " teleport" << std::endl;
}

Mage::~Mage(){}

int Mage::CloseAttack(){
	_range = CLOSE;
	_stamina -= 10;
	int damage = 0;
	std::cout << _name << " blinks" << std::endl;
	return damage;
}

int Mage::RangeAttack(){
	_range = RANGE;
	_stamina -= 25;
	int damage = 20 + _spirit;
	std::cout << _name << " launches a fire ball" << std::endl;
	return damage;
}

void Mage::Heal(){
	if(_hp <= 50)
		_hp += 50;
	else
		_hp = 100;
	std::cout << _name << " takes a potion" << std::endl;
}

void Mage::RestorePower(){
	_stamina += (100+_intelligence);
	std::cout << _name << " takes a mana potion" << std::endl;
}