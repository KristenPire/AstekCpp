#include "Sorcerer.hpp"
#include "Victim.cpp"


Sorcerer::Sorcerer(std::string name_, std::string title_): name(name_), title(title_)
{
	std::cout << name  << " , " << title << " , is born !" <<  std::endl;	
	
}

Sorcerer::~Sorcerer(){
	std::cout << name  << " , " << title << " , is dead. Consequences will never be the same !" <<  std::endl;
}

std::ostream& operator<<(std::ostream& os, Sorcerer& s)  
{  	
    os << "I am " << s.name << " , " << s.title << " , and I like ponies !";  
    return os;  
} 


int main(){
	Sorcerer s("Jean", "Le testeur");
	Victim v("Billy");
	std::cout << s << std::endl;
	std::cout << v << std::endl;
	return 0;
}
