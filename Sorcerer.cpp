#include "Sorcerer.hpp"



Sorcerer::Sorcerer(std::string name, std::string title):_name(name),_title(title){

	std::cout << "[ "<< _name << " ] , [ " << _title << " ] , is born !" << std::endl;


}


Sorcerer::~Sorcerer(){

	std::cout << "[ "<< _name << " ] , [ " << _title << " ] , is dead. Consequences will never be the same! " << std::endl;

}

const std::string Sorcerer::GetName() const{

	return _name;


}

const std::string Sorcerer::GetTitle() const{


	return _title;
}

void Sorcerer::polymorph(const Victim& V) const{

	V.getPolymorphed();

}


std::ostream& operator<<(std::ostream& a,Sorcerer& S ){

	a << "I am " << S.GetName() << " , " << S.GetTitle() << " and I like ponies!" << std::endl;

	return a;
}