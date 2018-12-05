#include "Sorcerer.hpp"
#include "Victim.hpp"

#include <iostream>
#include <string>


std::ostream &operator<<(std::ostream &out, Sorcerer& mage)
{
	return out<<"I am "<<mage.get_name()<<", "<<mage.get_title()<<", and I like ponies !";

}

Sorcerer::Sorcerer(const std::string &name, const std::string &title)
{
	_name = name;
	_title = title;
	std::cout<<this->_name<<", "<<this->_title<<", is born !"<<std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout<<this->_name<<", "<<this->_title<<", is dead. Consequences will never be the same !"<<std::endl;
}

std::string Sorcerer::get_name()
{
	return this->_name;
}

std::string Sorcerer::get_title()
{
	return this->_title;
}

void Sorcerer::polymorph(const Victim &victim)const
{
	victim.getPolymorphed();
}