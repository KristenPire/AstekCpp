#include "Victim.hpp"

Victim::Victim(std::string name_): name(name_)
{
	std::cout << "Some random victim called " << name  << " just popped !" <<  std::endl;	
	
}


Victim::~Victim(){
	std::cout << "Victim " << name  << " just died for no apparent reason !" <<  std::endl;	
}


std::ostream& operator<<(std::ostream& os, Victim& v)  
{  	
    os << "I'm " << v.name << " , and i like otters !";  
    return os;  
} 
