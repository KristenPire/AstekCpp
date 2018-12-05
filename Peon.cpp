#include "Peon.hpp"

Peon::Peon(std::string name_): name(name_)
{
	std::cout << "Zog zog." <<  std::endl;	
}

Peon::~Peon(){
	std::cout << "Bleuark ..." <<  std::endl;	
}


virtual void Peon::getPolymorphed()const{
	std::cout << name  << " has been turned into a pink pony !" <<  std::endl;	
}
