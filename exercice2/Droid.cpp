#include "Droid.hh"
#include <iostream>
#include <string>

Droid::Droid(std::string serial) : _Attack(25), _Toughness(15)
{
	_ID = serial;
	_Energy = 50;
	_Status = "Standing by"
}

Droid::Droid(Droid &Source) : _Attack(Source._Attack), _Toughness(Source._Toughness)
{
	_ID = Source._ID;
	_Energy = Source._Energy;
	_Status = Source._Status;
}

Droid::~Droid()
{
	std::cout<<"Destruction "<<this->_ID<<std::endl;
}

void Droid::status()
{
	std::cout<<"Droid "<<this->_ID<<" "<<this->_Status<<std::endl;
}