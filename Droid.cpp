#include "Droid.hh"

Droid::Droid(int serial,size_t Energy, size_t Attack, size_t Toughness, std::string Status):_serial(serial),_Energy(Energy),_Attack(Attack),_Toughness(Toughness)
{
	_Status = new std::string;
	*_Status = Status;
}

Droid::Droid(const Droid& A){

	_serial = A._serial;
	_Energy = A._Energy;
	_Attack = A._Attack;
	_Toughness = A._Toughness;
	_Status = *A._Status;

}


Droid::~Droid(){
}


const std::string Droid::getId(){

	return _serial;

}

const int Droid::getSerial(){
	return _serial;

}

const size_t Droid::getEnergy(){
	return _Energy;

}

const size_t Droid::getAttack(){

	return _Attack;
}

const size_t Droid::getToughness(){

	return _Toughness;
}

const std::string Droid::getStatus(){
	return *_Status;
}

void Droid::setStatus(std::string Status){
	*_Status = Status;

}

void Droid::setEnergy(size_t Energy){

	_Energy = Energy;

}

bool Droid::operator==(const Droid& A){

	if(_serial == A._serial && _Energy == A._Energy && _Attack==A._Attack && _Toughness == A._Toughness && *_Status == *(A._Status))
	{
		return true;
	}

	return false;
}

bool Droid::operator!=(const Droid& A){

	if(_serial != A._serial || _Energy != A._Energy || _Attack!=A._Attack || _Toughness != A._Toughness || _Status != A._Status)
		{
			return true;
		}

		return false;
}

void Droid::operator<<(size_t Energy){

	if((_Energy + Energy) >= 0 && (_Energy + Energy) <= 100)
	{
		_Energy += Energy;
		return;
	}

	return;
}

std::ostream& Droid::operator<<(std::ostream& a){

	a << "Droid '" << _serial << " , " << _Status << " , " << _Energy;

	return a;
}