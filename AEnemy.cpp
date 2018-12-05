# include "AEnemy.hpp"

AEnemy::AEnemy(int hp, const std::string & type_): type(type_),hitPoints(hp){

};

AEnemy::~AEnemy(){

};

void AEnemy::takeDamage(int damage){
	if(damage>0){
		this->hitPoints-=damage;
	}
};

const std::string & AEnemy::getType() const{
	return type;
};

int AEnemy::getHP()const{
	return hitPoints;
}



