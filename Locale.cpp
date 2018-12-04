#include "Locale.hh"
#include <iostream>



Locate::Locate(int x, int y, int serial):_serial(serial)
{
	_x = x;
	_y = y;

	std::cout<<"Locate "<<_serial<<" initialised"<<std::endl;
}

void Locate::addCom(int x, int y, int serial)
{
	if (this->_next==NULL)
	{
		Locate *tmp = new Locate(x, y, serial);
		this->_next = tmp;
	}
	else
	{
		Locate *tmp = new Locate(x, y, serial);
		tmp->_next = this->_next;
		this->_next = tmp;
	}
	this->_members++;
}


Locate *Locate::getCom()
{
	if (this->_next == NULL)
	{
		return NULL;
	}
	else
	{
		return this->_next;
	}
}

void Locate::removeCom()
{
	std::cout<<"Locate "<<this->_serial<<" shutting down"<<std::endl;
	this->_next = NULL;
	this->_members--;
}

void Locate::ping()
{
	std::cout<<"Locate "<<this->_serial<<" currently at "<<this->_x<<" "<<this->_y<<std::endl;
}


void Locate::locateSquad()
{
	Locate *next;
	next = this->_next;
	int i = this->_members;
	while(i>0)
	{
		next->ping();
		next = next->_next;
		i--;
	}
	this->ping();
}

Locate::~Locate()
{
	//delete tmp;
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