#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name_, std::string title_){
	name=name_;
	title=title_;
	std::cout<< name << " , "<< title <<" , is born !"<<std::endl;
}

Sorcerer::~Sorcerer(){
	std::cout<< name << " , "<< title <<" , is dead .Consequences will never be the same !"<<std::endl;
}

std::string Sorcerer::getName()const{
	return name;
};

std::string Sorcerer::getTitle()const{
	return title;
};

std::ostream& operator<<(std::ostream & stream, const Sorcerer & s){
	stream<<"I am "<< s.getName() <<" , " <<s.getTitle()<< ", and I like ponies !"<<std::endl;
	return stream;
};

void Sorcerer::polymorph (const Victim &victim) const{
	victim.getPolymorphed();
};