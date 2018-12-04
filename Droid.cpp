#include "Droid.hh"

Droid::Droid(std::string serial=""): Id(serial), Energy(50), Attack(25), Toughness(15)
{
	Status = new std::string("Standing by");
	std::cout << "Droid '"  << Id << "' Activated" <<  std::endl;	
	
	//~ std::cout << "Const Status " << Status << std::endl;
	//~ std::cout << "Const Contenu de Status " << *Status << std::endl;
	
}

Droid::Droid(const Droid &d): Id(d.Id), Energy(d.Energy), Attack(d.Attack), Toughness(d.Toughness)
{
	//~ std:: string str_status = *d.Status;
	//~ std::string *ptr = &str_status;
	//~ Status = ptr;
	std::string *ptr = d.Status;
	Status = ptr;
	std::cout << "Droid '"  << Id << "' Activated, memory Dumped" <<  std::endl;
}

Droid Droid::operator=(const Droid &d){
	Id = d.Id;
	Energy = d.Energy;
	//~ Attack=d.Attack;	Impossible, ce sont des static
	//~ Toughness=d.Toughness;
	std::string *ptr = d.Status;
	Status = ptr;
	return *this;
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
	//~ std::cout << "get Status " << this->Status << std::endl;
	//~ std::string* ptr = this->Status;
	//~ std::cout << "get ptr " << ptr << std::endl;
	//~ std::string contenu = *ptr;
	//~ std::cout << "get contenu " << contenu << std::endl;
	//~ std::cout << "get Contenu de Status " << *ptr << std::endl;	
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

bool operator==(const Droid &d1, const Droid &d2){
	if(d1.getId()== d2.getId() && d1.getEnergy()==d2.getEnergy() && d1.getAttack()==d2.getAttack() && d1.getToughness()==d2.getToughness() && d2.getStatus()==d2.getStatus()){
		return true;
	}
	else{
		return false;
	}
}

bool operator!=(const Droid &d1, const Droid &d2){
	if(d1.getId()== d2.getId() && d1.getEnergy()==d2.getEnergy() && d1.getAttack()==d2.getAttack() && d1.getToughness()==d2.getToughness() && d2.getStatus()==d2.getStatus()){
		return false;
	}
	else{
		return true;
	}
}



Droid& operator<<(Droid &d, size_t charge)  
{  
    if (d.getEnergy()+charge <= 100){
		d.setEnergy(d.getEnergy()+charge);
		charge=0;
	}
	else{
		charge=charge - (100-d.getEnergy());
		d.setEnergy(100);
		
	}
    return d;
}  


std::ostream& operator<<(std::ostream& os, const Droid& d)  
{  
	
	//~ std::cout << "Ope Status " << d.getStatus() << std::endl;
	//~ std::string* ptr = d.getStatus();
	//~ std::cout << "Ope Contenu de Status " << *ptr << std::endl;	
	
    os << "Droid '" << d.getId() << "' , " << d.getStatus() << " , " << d.getEnergy();  
    return os;  
}  



int main(){
	Droid d;
	//~ std::cout << d << std::endl;
	//~ std::cout << "Je cree batterie" << std::endl;
	//~ size_t batterie = 10;
	//~ std::cout << "Je charge" << std::endl;
	//~ d << 5 << 25 << batterie;
	//~ std::cout << "J'ai charge" << std::endl;	
	//~ std::cout << d << std::endl;
	//~ std::cout << "Batterie :" << batterie << std::endl;
	Droid d1("Avenger");
	size_t Durasel = 200;
	
	std::cout << d << std::endl;
	std::cout << d1 << std::endl;
	d = d1;
	d.setStatus(new std::string("Kill Kill Kill!"));
	d << Durasel;
	std::cout << d << "--" << Durasel << std::endl;
	Droid d2 = d;
	d.setId("Rex");
	std::cout << (d2 != d) << std::endl;
	return 0;
}


