#include "Locale.hh"
#include <iostream>



Locate::Locate(int x, int y, int serial):_serial(serial)
{
	_x = x;
	_y = y;
	_next = NULL;
	std::cout<<"Locate "<<_serial<<" initialised"<<std::endl;
}

void Locate::addCom(int x, int y, int serial)
{
	Locate *tmp = new Locate(x, y, serial);
	if (this->_next==NULL)
		this->_next = tmp;
	else
	{
		tmp->_next = this->_next;
		this->_next = tmp;
	}
}


Locate *Locate::getCom()
{
	return this->_next;
}

void Locate::removeCom()
{
	Locate *tmp = this->_next;
	
	this->_next = tmp->_next;

	delete tmp;
}

void Locate::ping()
{
	std::cout<<"Locate "<<this->_serial<<" currently at "<<this->_x<<" "<<this->_y<<std::endl;
}


void Locate::locateSquad()
{
	Locate *next;
	next = this->_next;
	while(next!=NULL)
	{
		next->ping();
		next = next->_next;
	}
	this->ping();
}

Locate::~Locate()
{
	std::cout<<"Locate "<<this->_serial<<" shutting down"<<std::endl;
}




int main()
{
	Locate k(42, 32, 101010);

	k.addCom(56, 25, 65);
	k.addCom(73, 34, 51);

	k.locateSquad();

	k.removeCom();
	k.removeCom();

	return 0;
}