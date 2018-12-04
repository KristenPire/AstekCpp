#include "Droid.hh"

// constructeurs et destructeur


Droid::Droid(std::string serial=""):energy(50), attack(25), toughness(15)
{
	status =new std::string("Standing by");
	id=serial;
};

Droid::Droid(const Droid& droid):energy(50), attack(25), toughness(15){
	*status=*(droid.status);
	id=droid.id;
}

Droid Droid :: operator= ( const Droid & droid){
	energy=droid.energy;
// attack et toughtness sont uniquement en lecture on ne peux pas les affecter	
//	attack=droid.attack;
//	toughness=droid.toughness;
	*status=*(droid.status);
	id=droid.id;
	return *this;
}

bool Droid::operator==(const Droid & droid){
	if((this->energy==droid.energy)&&(this->attack==droid.attack)&&(this->toughness==droid.id)&&(this->id==droid.id)&&(this->&status==drois.&status)){
		return true;
	}else{
		return false;
	}
};


Droid::~Droid(){
	std::cout<<"Destruction"<<std::endl;
	delete status;
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

std::string Droid::getStatus(){
	return *status;
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