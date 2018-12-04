#include "Droid.hh"
#include <iostream>
#include <string>

Droid::Droid(const std::string &serial) : _Attack(25), _Toughness(15)
{
	_ID = serial;
	_Energy = 50;
	*_Status = "Standing by";
	std::cout<<"Droid '"<<_ID<<"' activated"<<std::endl;
}

Droid::Droid(const Droid &Source) : _Attack(Source._Attack), _Toughness(Source._Toughness)
{
	_ID = Source._ID;
	_Energy = Source._Energy;
	_Status = Source._Status;
	std::cout<<"Droid '"<<_ID<<"' activated, memory dumped"<<std::endl;
}

Droid::~Droid()
{
	std::cout<<"Droid '"<<this->_ID<<"' destroyed"<<std::endl;
}


Droid Droid::operator=(const Droid& Source)
{
	_ID = Source._ID;
	_Energy = Source._Energy;
	_Status = Source._Status;

	return *this;
}

bool Droid::operator==(const Droid& robot2)
{
	if ((this->_ID == robot2._ID)&&(this->_Attack == robot2._Attack)&&(this->_Toughness == robot2._Toughness)&&(this->_Energy == robot2._Energy)&&(this->_Status == robot2._Status))
	{
		return true;
	}
	else
	{
		return false;
	}
}


bool Droid::operator!=(const Droid& robot2)
{
	return !(*this==robot2);
}

Droid Droid::operator<<(std::size_t &reload)
{
	std::size_t battery =100-_Energy;
	if (battery<reload)
	{
		_Energy = 100;
		reload -=battery;
	}
	else
	{
		_Energy += reload;
		reload=0;
	}

	return *this;
}




void Droid::set_energy(std::size_t new_energy)
{
	_Energy = new_energy;
}

void Droid::set_status(std::string *new_status)
{
	_Status = new_status;
}

std::size_t Droid::get_attack()
{
	return this->_Attack;
}

std::size_t Droid::get_toughness()
{
	return this->_Toughness;
}

std::string Droid::get_serial()
{
	return this->_ID;
}

std::string *Droid::get_status()
{
	return this->_Status;
}

/**/