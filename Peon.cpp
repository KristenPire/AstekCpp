#include "Peon.hpp"



	Peon::Peon(std::string name):Victim(name){

		std::cout << "Ready to work." << std::endl;

	}


	Peon::~Peon(){

		std::cout << "Who you want me kill? What me?!" << std::endl;

	}

	void Peon::getPolymorphed() const{

		std::cout << _name << " has been turned into a pink pony !" << std::endl;
	
	}