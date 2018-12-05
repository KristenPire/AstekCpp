#include "Droid.hh"

// constructeurs et destructeur


Droid::Droid(std::string serial=""):energy(50), attack(25), toughness(15)
{
	status =new std::string("Standing by");
	id=serial;
	std::cout<<" Droid ’ " <<id <<" ’ Activated"<<std::endl;
};

Droid::Droid(const Droid& droid):energy(50), attack(25), toughness(15){
	std::string* ptr=droid.status;
	this->status=ptr;
	this->id=droid.id;
}

void Droid :: operator= ( const Droid & droid){
	this->energy=droid.energy;
// attack et toughtness sont uniquement en lecture on ne peux pas les affecter	
//	attack=droid.attack;
//	toughness=droid.toughness;
	std::string* ptr=droid.status;
	this->status=ptr;
	this->id=droid.id;
	std::cout<<" Droid ’ "<<droid.id<<" ’ Activated , Memory Dumped"<<std::endl;
}

bool Droid::operator==(const Droid & droid){
    if((this->energy==droid.energy)&&(this->attack==droid.attack)&&(this->toughness==droid.toughness)&&(this->id==droid.id)&&(&(this->status)==&(droid.status))){
        return true;
    }else{
        return false;
    }
};

bool Droid::operator!=(const Droid & droid){

    if(!(this->energy==droid.energy)||!(this->attack==droid.attack)||!(this->toughness==droid.toughness)||!(this->id==droid.id)||!(&(this->status)==&(droid.status))){

        return true;

    }else{

        return false;

    }

};


void Droid::operator<<(size_t& newEnergy){
    if((100-this->energy)>=newEnergy){
        this->energy+=newEnergy;
        newEnergy=0;
    }else{
        newEnergy-=(100-this->energy);
        this->energy+=(100-this->energy);
    }
};


std::ostream& operator<< (std::ostream& objet ,const Droid & droid){
    objet<< " Droid ' "<< droid.getId()<< " , "<< droid.getStatus() <<" , "<<droid.getEnergy();
    return objet;
};


Droid::~Droid(){
	std::cout<<"Droid ’ "<< this->id <<" ’ Destroyed"<<std::endl;
	delete status;
};


// getter et setteur

std::string Droid::getId()const{
	return id;
};

size_t Droid::getEnergy()const{
	return energy;
};

size_t Droid::getAttack()const{
	return attack;
};

size_t Droid::getToughness()const{
	return toughness;
};

std::string Droid::getStatus()const{
	return *status;
};

void Droid::setId(std::string newId){
	this->id=newId;
};

void Droid::setEnergy(size_t newEnergy){
	this->energy=newEnergy;
};

void Droid::setStatus(std::string* newStatus){
	this->status=newStatus;
};


int main(){

Droid d=Droid();
Droid d1=Droid("Avenger");
size_t Durasel =200;
std::cout<< d<< std::endl;
std::cout<< d1<< std::endl;
d=d1;
d.setStatus(new std::string("Kill Kill Kill"));
d<<Durasel;
std::cout<<d<<"--"<<Durasel<< std::endl;
Droid d2 =d;
d.setId("Rex");
std::cout << (d2 != d) <<std::endl;

return 0;
};