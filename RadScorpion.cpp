#include "RadScorpion.hh"

RadScorpion::RadScorpion() : AEnemy(170, "RadScoprion"){
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion(){
	std::cout << "* SPROTCH *" << std::endl;
}

void RadScorpion::takeDamage(int damage){
	if (damage > 0){
		if(_hp >= damage)
			_hp -= damage;
		else
			_hp = 0;
	}
}
