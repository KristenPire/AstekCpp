#include "Victim.hpp"



Victim::Victim(std::string name):_name(name){

	std::cout << "Some random victim called "<< _name << " just popped !" << std::endl;

}


Victim::~Victim(){


	std::cout << "Some random victim called "<< _name << " just died, ONE MORE TIME (in singing)" << std::endl;

}


const std::string Victim::GetName() const{


	return _name;
}

void Victim::getPolymorphed() const{

	std::cout << _name << " has been turned into a cute little sheep !" << std::endl;



}

std::ostream& operator<<(std::ostream& a, Victim& V){

	a << "I am " << V.GetName() << " and I like otters!" << std::endl;

	return a;

}