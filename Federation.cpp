#include "Federation.hpp"

//Independant Ships
Federation::Ship::Ship(int length, int width, std::string name): _length(length), _width(width), _name(name), _maxWarp(1), _core(NULL){
	std::cout << "The independant ship " << _name << " just finished its construction. It is " << _length << " m in length and " << _width << " m in width." << std::endl;
}

void Federation::Ship::setupCore(WarpSystem::Core *core){
	WarpSystem::Core *ptr = core;
	_core = ptr;
	std::cout << _name << ": The core is set." << std::endl;
}

void Federation::Ship::checkCore(){
	std::string status;
	if(_core->checkReactor()->isStable()){
		status="stable";
	}
	else{
		status="unstable";
	}
	std::cout << _name << ": The core is " << status << " at the time." << std::endl;
}

//Starfleet Ships
Federation::Starfleet::Ship::Ship(int length, int width, std::string name, short maxWarp): _length(length), _width(width), _name(name), _maxWarp(maxWarp), _core(NULL){
	std::cout << "The ship USS " << _name << " has been finished. It is " << _length << " m in length and " << _width << " m in width." << std::endl;
	std::cout << "It can go to Warp " << _maxWarp << " !" << std::endl;
}

void Federation::Starfleet::Ship::setupCore(WarpSystem::Core *core){
	WarpSystem::Core *ptr = core;
	_core = ptr;
	std::cout << "USS " << _name << ": The core is set." << std::endl;
}

void Federation::Starfleet::Ship::checkCore(){
	std::string status;
	if(_core->checkReactor()->isStable()){
		status="stable";
	}
	else{
		status="unstable";
	}
	std::cout << "USS " << _name << ": The core is " << status << " at the time." << std::endl;
}
