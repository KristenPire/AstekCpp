#include "SuperMutant.hpp"

SuperMutant::SuperMutant():AEnemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant(){
	std::cout << "Aaargh..." << std::endl;
}

void SuperMutant::takeDamage(int damage){
	if (damage > 3){
		hp_ = hp_ - damage + 3;
	}
}
