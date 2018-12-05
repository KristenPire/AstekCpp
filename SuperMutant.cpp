#include "SuperMutant.hpp"

SuperMutant::SuperMutant():AEnemy(170,"Super Mutant"){
	std::cout<<"Gaaah. Me want smash heads"<<std::endl;
};

SuperMutant::~SuperMutant(){
	std::cout<<" Aaaargh.... "<<std::endl;
};

void SuperMutant::takeDamage (int damage){
if(damage>0){
		this->hitPoints-=(damage-3);
	}
};