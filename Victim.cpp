#include "Victim.hh"

Victim::Victim(std::string name) : _name(name){
	std::cout << "Some random victim called " << _name << " just popped !" << std::endl;
}

Victim::~Victim(){
	std::cout << "Victim " << _name << " just died for no apparent reason !" << std::endl;
}

std::string Victim::getName() const{  return _name;  }

std::ostream& operator<<(std::ostream& os, const Victim& victim){
	os << "I'm " << victim.getName() << " and i like otters !";
	return os;
}