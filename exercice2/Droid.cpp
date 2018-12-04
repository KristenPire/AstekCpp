#include "Droid.hh"
#include <iostream>
#include <string>

Droid::Droid(std::string serial) : _Attack(25), _Toughness(15)
{
	_ID = serial;
	_Energy = 50;
	_Status = "Standing by"
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


Droid operator=(const Droid& Source)
{
	_ID = Source._ID;
	_Energy = Source._Energy;
	_Status = Source._Status;
}

bool operator==(const Droid& robot) const
{
	if (this->_ID == robot._ID)&&(this->_Attack == robot._Attack)&&(this->_Toughness == robot._Toughness)&&(this->_Energy == robot._Energy)&&(this->_Status == robot._Status)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool operator!=(const Droid& robot) const;
{
	return !(this==robot);
}

Droid operator<<(const std::size_t reload)
{
	std::size_t battery =_Energy + reload;
	if (battery>100)
	{
		_Energy = 100;
	}
	else
	{
		_Energy = battery;
	}
}




void Droid::set_Energy(std::size_t new_energy)
{
	_Energy = new_energy;
}

void Droid::set_status(std::string *new_status)
{
	_Status = new_status;
}

const std::size_t get_attack()
{
	return this->_Attack;
}

const std::size_t get_toughness()
{
	return this->_Toughness;
}

std::string get_serial()
{
	return this->_ID;
}

std::string *Droid::get_status()
{
	//std::cout<<"Droid "<<this->_ID<<" "<<this->_Status<<std::endl;
	return this->_Status;
}