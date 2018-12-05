#include "Peon.hpp"

#include <iostream>
#include <string>

Peon::Peon(const std::string &name): Victim(name)
{
	_name = name;
	std::cout<<"Zog zog..."<<std::endl;
}

Peon::~Peon()
{
	std::cout<<"Bleuark..."<<std::endl;
}

void Peon::getPolymorphed()const
{
	std::cout<<this->get_name()<<" has been turned into a pink pony !"<<std::endl;
}