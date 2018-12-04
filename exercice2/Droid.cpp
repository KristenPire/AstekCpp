#include "Droid.hh"
#include <iostream>
#include <string>

Droid::Droid(const std::string &serial, const std::string status) : _Attack(25), _Toughness(15)
{
	_Status = new std::string;
	_ID = serial;
	_Energy = 50;
	*_Status = status;
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


Droid &Droid::operator=(const Droid& Source)
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

Droid &Droid::operator<<(std::size_t &reload)
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

std::ostream &operator<<(std::ostream &out, const Droid& robot)
{
	return out<<"Droid "<<robot.get_serial()<<" "<<robot.get_status()<<robot.get_energy();
}




void Droid::set_energy(std::size_t new_energy)
{
	_Energy = new_energy;
}

void Droid::set_status(std::string *new_status)
{
	_Status = new_status;
}

void Droid::set_id(std::string new_ID)
{
	this->_ID = new_ID;
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

std::string Droid::get_energy()
{
	return this->_Energy;
}


int main()
{
	Droid d;
	Droid d1("Avenger");
	std::size_t Durasel = 200;

	std::cout << d << std::endl;
	std::cout << d1 << std::endl;

	d=d1;
	
	d.set_status(new std::string("KILL KILL KILL !"));
	std::cout<<"-----------"<<std::endl;
	d<<Durasel;
	
	std::cout<<d<<"--"<<Durasel<<std::endl;
	Droid d2 = d;
	
	d.set_id("Rex");
	std::cout<<(d2!=d)<<std::endl;

	return 0;
}