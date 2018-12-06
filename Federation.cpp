#include "Federation.hpp"




Federation::Starfleet::Ship::Ship(int length,int width, std::string name, short maxWarp):_length(length),_width(width),_name(name),_maxWarp(maxWarp),_core(NULL){

	std::cout << "The ship USS" << _name << " has been finished." << "It is " << _length << " m in length and " << std::endl;
	std::cout << _width << " m in width. " << std::endl;
	std::cout << "It can go to Warp" << _maxWarp << std::endl;

}

Federation::Starfleet::Ship::~Ship(){

	 // delete _core;

}

void Federation::Starfleet::Ship::setupCore(WarpSystem::Core* core){

	_core = core;
	std::cout << _name << ": The core is set "<< std::endl;
	
}

const void Federation::Starfleet::Ship::checkCore(){

	std::cout << "USS " << _name << ": The core is " << ((_core->WarpSystem::Core::checkReactor()->WarpSystem::QuantumReactor::isStable())? "stable":"non stable") << " at the time" << std::endl;

}



Federation::Ship::Ship(int length,int width, std::string name):_length(length),_width(width),_name(name),_core(NULL){

	std::cout << "The independant ship" << _name << " has been finished." << "It is " << _length << " m in length and " << std::endl;
	std::cout << _width << " m in width. " << std::endl;

}


void Federation::Ship::setupCore(WarpSystem::Core* core){


	_core = core;
	std::cout << _name << ": The core is set "<< std::endl;
	
	}


const void Federation::Ship::checkCore(){

	std::cout << "independant " << _name << ": The core is " << ((_core->WarpSystem::Core::checkReactor()->WarpSystem::QuantumReactor::isStable())? "stable":"non stable") << " at the time" << std::endl;

}

