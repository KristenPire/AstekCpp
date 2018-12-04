#include "Droid.hh"

Droid::Droid(std::string serial,size_t Energy, size_t Attack, size_t Toughness, std::string Status):_serial(serial),_Energy(Energy),_Attack(Attack),_Toughness(Toughness)
{
	_Status = new std::string;
	*_Status = Status;

	std::cout << "Droid " << _serial << "Activated" << std::endl;
}

Droid::Droid(const Droid& A):_serial(A._serial),_Energy(A._Energy),_Attack(A._Attack),_Toughness(A._Toughness){
	
	_Status = new std::string;
	*_Status = *A._Status;
	std::cout << "Droid " << _serial << "Activated , Memory Dumped" << std::endl;
}


Droid::~Droid(){ 
	delete _Status; // Nepa oublier
	std::cout << "Droid " << _serial << " Destroyed" << std::endl;
}


std::string Droid::getId() const{

	return _serial;

}

std::string Droid::getSerial() const{
	return _serial;

}

size_t Droid::getEnergy() const{
	return _Energy;

}

size_t Droid::getAttack() const{

	return _Attack;
}

size_t Droid::getToughness() const {

	return _Toughness;
}

std::string Droid::getStatus() const{
	return *_Status;
}

void Droid::setID(std::string Id){
	_serial = Id;

}


void Droid::setStatus(std::string *Status){
	*_Status = *Status;
}

void Droid::setEnergy(size_t Energy){

	_Energy = Energy;

}

void Droid::operator=(const Droid& A){

	_serial = A._serial;
	_Energy = A._Energy;
	*_Status = *A._Status; 
}


bool Droid::operator==(const Droid& A){

	return (_serial == A._serial && _Energy == A._Energy && _Attack==A._Attack && _Toughness == A._Toughness && *_Status == *(A._Status));
}

bool Droid::operator!=(const Droid& A){

	if(_serial != A._serial || _Energy != A._Energy || _Attack!=A._Attack || _Toughness != A._Toughness || _Status != A._Status)
		{
			return true;
		}

		return false;
}

void Droid::operator<<(size_t &Energy){

	if((_Energy + Energy) <= 100)
	{
		_Energy += Energy;
		Energy = 0;
		return;
	}
	else{
		Energy -= (100-_Energy) ;
		_Energy = 100;
	}

	return;
}

std::ostream& operator<<(std::ostream& a,const Droid& D){

	a << "Droid '" << D.getSerial()<< " , " << D.getStatus() << " , " << D.getEnergy();

	return a;
}