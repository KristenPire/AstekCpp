#include "Victim.hpp"

#include <iostream>
#include <string>

Victim::Victim(const std::string &name)
{
	_name = name;
	std::cout<<"Some random victim called "<<this->_name<<" just popped !"<<std::endl;
}

Victim::~Victim()
{
	std::cout<<"Victim "<<this->_name<<" just died for no apparent reason !"<<std::endl;
}

std::string Victim::get_name()const
{
	return this->_name;
}

std::ostream &operator<<(std::ostream out, Victim& victim)
{
	return out<<"I am "<<victim.get_name()<<" and I like otters !";
}

void Victim::getPolymorphed()const
{
	std::cout<<this->get_name()<<" has been turned into a cute little sheep !"<<std::endl;
}
