#include "SuperMutant.hh"

SuperMutant::SuperMutant() : AEnemy(170, "Super Mutant"){
	std::cout << "Gaaah. Ma want smash heads !" << std::endl;
}

SuperMutant::~SuperMutant(){
	std::cout << "Aaargh..." << std::endl;
}

void SuperMutant::takeDamage(int damage){
	if (damage > 0){
		if(_hp >= damage)
			_hp -= damage;
		else
			_hp = 0;
	}
}
