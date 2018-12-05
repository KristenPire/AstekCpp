#include "Sorcerer.hpp"



Sorcerer::Sorcerer(std::string name, std::string title):_name(name),_title(title){

	std::cout << "[ "<< _name << " ] , [ " << _title << " ] , is born !" << std::endl;


}


Sorcerer::~Sorcerer(){

	std::cout << "[ "<< _name << " ] , [ " << _title << " ] , is dead. Consequences will never be the same! " << std::endl;

}


ostream& Sorcerer::operator<<(ostream& a,Sorcerer& S ){

	a << "I am " << _name << " , " << _title << " and I like ponies!" << std::endl;

	return a;
}