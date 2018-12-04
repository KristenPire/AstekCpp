#include "Droid.hh"

// constructeurs et destructeur


Droid::Droid(std::string serial=""):energy(50), attack(25), toughness(15)
{
	*status ="Standing by";
	id=serial;
};

Droid::Droid(const Droid& droid):energy(50), attack(25), toughness(15){
	*status=*(droid.status);
	id=droid.id;
}


Droid::~Droid(){

};


// getter et setteur

std::string Droid::getId(){
	return id;
};

size_t Droid::getEnergy(){
	return energy;
};

size_t Droid::getAttack(){
	return attack;
};

size_t Droid::getToughness(){
	return toughness;
};

std::string* Droid::getStatus(){
	return status;
};

void Droid::setId(std::string newId){
	id=newId;
};

void Droid::setEnergy(size_t newEnergy){
	energy=newEnergy;
};

void Droid::setStatus(std::string* newStatus){
	status=newStatus;
};


int main(){

Droid d1=Droid();
Droid d2=Droid("d2");


return 0;
};