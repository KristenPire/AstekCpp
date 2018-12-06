#include "Federation.hpp"
#include "WarpSystem.hpp"

#include <iostream>
#include <string>

Federation::Starfleet::Ship::Ship(int length, int width, std::string name, short maxWarp) : _length (length), _width (width), _name (name), _maxWarp (maxWarp) 
{
	std::cout<<"The ship USS" <<_name<<"has been finished. It is "<<_length<<"m in length and "<<_width<<"m in width."<<std::endl;
	std::cout<<"It can go to Warp"<<_maxWarp<<" ! "<<std::endl;

}
/*
NO NEED TO DEFINE THIS BECAUSE OF THE '=DEFAULT' IN THE .HPP


Federation::Starfleet::Ship::~Ship()
{
	std::cout<<"The ship USS" <<_name<<"has been destroyed !!"<<std::endl;
}
*/

void Federation::Starfleet::Ship::setupCore(WarpSystem::QuantumReactor::Core *core)
{
	
	_core = core;

	std::cout<<"USS "<<_name<<" : The core is set"<<std::endl;
}

