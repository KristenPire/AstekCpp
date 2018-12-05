#include "Victim.hpp"

Victim::Victim(std::string name_){
	name=name_;
	std::cout<<"Some random victim called " << name <<" just popped !"<<std::endl;
};

Victim::~Victim(){
	std::cout<<"Victim " <<name<<" just died for no apparent reason !"<<std::endl;
};

std::string Victim::getName()const{
	return name;
};

void Victim::getPolymorphed()const{
	std::cout<<name<< " has been turned into a cute little sheep !"<<std::endl;
};

std::ostream& operator<<(std::ostream & stream, const Victim & v){
	stream<<"I'm "<< v.getName() << ", and I like otters !";
	return stream;
};