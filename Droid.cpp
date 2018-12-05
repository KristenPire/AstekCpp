#include "Droid.hh"

Droid::Droid(std::string serial=""): Id(serial), Energy(50), Attack(25), Toughness(15)
{
	Status = new std::string("Standing by");
	std::cout << "Droid '"  << Id << "' Activated" <<  std::endl;	
	
}

Droid::Droid(const Droid &d): Id(d.Id), Energy(d.Energy), Attack(d.Attack), Toughness(d.Toughness)
{
	std::string *ptr = d.Status;
	Status = ptr;	
	std::cout << "Droid '"  << Id << "' Activated, memory Dumped" <<  std::endl;
}

void Droid::operator=(const Droid &d){
	this->Id = d.Id;
	this->Energy = d.Energy;
	//~ Attack=d.Attack;	Impossible, ce sont des const
	//~ Toughness=d.Toughness;
	std::string *ptr = d.Status;
	this->Status = ptr;
}

Droid::~Droid(){
	delete this->Status;
	std::cout << "Droid '"  << this->Id << "' Destroyed" <<  std::endl;
}

//Getters et Setters


std::string Droid::getId() const{
	return this->Id;
}
size_t Droid::getEnergy() const{
	return this->Energy;
}
size_t Droid::getAttack() const{
	return this->Attack;
}
size_t Droid::getToughness() const{
	return this->Toughness;
}
std::string Droid::getStatus() const{
	return *this->Status;
}

void Droid::setId(std::string str){
	this->Id = str;
}
void Droid::setEnergy(size_t nb){
	if(nb>100){
		std::cout << "Invalid value, energy must be between 0 and 100" << std::endl;
	}
	else{
		this->Energy = nb;
	}
}
void Droid::setStatus(std::string *ptr){
	this->Status = ptr;
}

//Comparison

bool Droid::operator==(const Droid &d){
	return(this->Id== d.getId() && this->Energy==d.getEnergy() && this->Attack==d.getAttack() && this->Toughness==d.getToughness() && *this->Status==d.getStatus());
}

bool Droid::operator!=(const Droid &d){
	return(!(this->Id== d.getId() && this->Energy==d.getEnergy() && this->Attack==d.getAttack() && this->Toughness==d.getToughness() && *this->Status==d.getStatus()));
}



Droid& Droid::operator<<(size_t &charge)  
{  
    if (this->Energy+charge <= 100){
		this->Energy=this->Energy+charge;
		charge=0;
	}
	else{
		charge=charge - (100-this->Energy);
		this->Energy=100;
		
	}
	return *this;
}  



std::ostream& operator<<(std::ostream& os, const Droid& d)  
{  	
    os << "Droid '" << d.getId() << "' , " << d.getStatus() << " , " << d.getEnergy();  
    return os;  
}  



