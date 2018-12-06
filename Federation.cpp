#include "Federation.hh"

Federation::Starfleet::Ship::Ship(int length, int width, std::string name, short maxWarp) : _length(length), _width(width), _name(name), _maxWarp(maxWarp){
	std::cout << "The ship USS " << _name << " has been finished. It is " << _length << " m in length and " << _width << " m in width." << std::endl;
	if (_maxWarp>0)
		std::cout << "It can go to Warp" << _maxWarp << "!" << std::endl;
	_core = NULL;
}

Federation::Starfleet::Ship::~Ship(){}

void Federation::Starfleet::Ship::setupCore(WarpSystem::Core* core){
	_core = core;
	std::cout << "USS " << _name << ": The Core is set." << std::endl;
}

void Federation::Starfleet::Ship::checkCore(){
	if (_core->checkReactor()->isStable())
		std::cout << "USS " << _name << ": The core is stable at the time." << std::endl; 
	else
		std::cout << "USS " << _name << ": The core is unstable at the time." << std::endl;
}

Federation::Ship::Ship(int length, int width, std::string name, short maxWarp) : _length(length), _width(width), _name(name), _maxWarp(maxWarp){
	std::cout << "The ship USS " << _name << " has been finished. It is " << _length << " m in length and " << _width << " m in width." << std::endl;
	if (_maxWarp>0)
		std::cout << "It can go to Warp" << _maxWarp << "!" << std::endl;
	_core = NULL;
}

Federation::Ship::~Ship(){}

void Federation::Ship::setupCore(WarpSystem::Core* core){
	_core = core;
	std::cout << "USS " << _name << ": The Core is set." << std::endl;
}

void Federation::Ship::checkCore(){
	if (_core->checkReactor()->isStable())
		std::cout << "USS " << _name << ": The core is stable at the time." << std::endl; 
	else
		std::cout << "USS " << _name << ": The core is unstable at the time." << std::endl;
}