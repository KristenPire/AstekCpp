#include "Sorcerer.hpp"


Sorcerer::Sorcerer(std::string name_, std::string title_): name(name_), title(title_)
{
	std::cout << name  << " , " << title << " , is born !" <<  std::endl;	
	
}

Sorcerer::~Sorcerer(){
	std::cout << name  << " , " << title << " , is dead. Consequences will never be the same !" <<  std::endl;
}

std::string Sorcerer::getName(){
	return name;
}

std::string Sorcerer::getTitle(){
	return title;
}


std::ostream& operator<<(std::ostream& os, Sorcerer& s)  
{  	
    os << "I am " << s.getName() << " , " << s.getTitle() << " , and I like ponies !" << std::endl;  
    return os;  
} 


void Sorcerer::polymorph(const Victim &victim)const{
	victim.getPolymorphed();
}


