#include "Priest.hh"

Priest::Priest(const std::string & name, int level) : Character(name, level), Mage(name, level){
	_class = "Priest";
	_race = "Orc";
	_hp = 100;
	_strength = 4;
	_stamina = 4;
	_intelligence = 42;
	_spirit = 21;
	_agility = 284;
	_range = CLOSE;

	std::cout << _name << " enters in the order" << std::endl;
}

Priest::~Priest(){}

int Priest::CloseAttack(){
	_range = CLOSE;
	_stamina -= 10;
	int damage = 10 + _spirit;
	std::cout << _name << " uses a spirit explosion" << std::endl;
	_range = RANGE;
	return damage;
}

void Priest::Heal(){
	_stamina -= 10;
	if(_hp <= 30)
		_hp += 70;
	else
		_hp = 100;
	std::cout << _name << " casts a little heal spell" << std::endl;
}