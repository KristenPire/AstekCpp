#include "Droid.hh"
#include <iostream>
#include <string>

Droid::Droid(std::string serial) : _Attack(25), _Toughness(15)
{
	_ID = serial;
	_Energy = 50;
	_Status = "Standing by"
}

Droid::Droid(const Droid &Source) : _Attack(Source._Attack), _Toughness(Source._Toughness)
{
	_ID = Source._ID;
	_Energy = Source._Energy;
	_Status = Source._Status;
}

Droid::~Droid()
{
	std::cout<<"Destruction "<<this->_ID<<std::endl;
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