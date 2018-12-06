#include "Federation.hpp"
#include "WarpSystem.hpp"

#include <iostream>
#include <string>

Federation::Starfleet::Ship::Ship(int length, int width, std::string name, short maxWarp) : _length (length), _width (width), _name (name), _maxWarp (maxWarp) 
{
	std::cout<<"The ship USS" <<_name<<"has been finished. It is "<<_length<<"m in length and "<<_width<<"m in width."<<std::endl;
	std::cout<<"It can go to Warp "<<_maxWarp<<" ! "<<std::endl;

}
/*
NO NEED TO DEFINE THIS BECAUSE OF THE '=DEFAULT' IN THE .HPP
*/

Federation::Starfleet::Ship::~Ship()
{
	std::cout<<"The ship USS" <<_name<<"has been destroyed !!"<<std::endl;
}


void Federation::Starfleet::Ship::setupCore(WarpSystem::Core *core)
{
	
	_core = core;

	std::cout<<"USS "<<_name<<" : The core is set"<<std::endl;
}

void Federation::Starfleet::Ship::checkCore()
{
	std::cout<<"USS "<<_name<<" : The core is "<< ((_core->WarpSystem::Core::checkReactor()->WarpSystem::QuantumReactor::isStable()) ? "stable" : "unstable")<<" at the time."<<std::endl;
}




Federation::Ship::Ship(int length, int width, std::string name) : _length (length), _width (width), _name (name), _maxWarp (1) 
{
	std::cout<<"The independant ship " <<_name<<" just finished its construction. It is "<<_length<<"m in length and "<<_width<<"m in width."<<std::endl;
}

void Federation::Ship::setupCore(WarpSystem::Core *core)
{
	
	_core = core;

	std::cout<<_name<<" : The core is set"<<std::endl;
}

void Federation::Ship::checkCore()
{
	std::cout<<_name<<" : The core is "<< ((_core->WarpSystem::Core::checkReactor()->WarpSystem::QuantumReactor::isStable()) ? "stable" : "unstable")<<" at the time."<<std::endl;
}