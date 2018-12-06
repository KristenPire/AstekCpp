#include "Federation.hpp"




Federation::Starfleet::Ship::Ship(int length,int width, std::string name, short maxWarp):_length(length),_width(width),_name(name),_maxWarp(maxWarp){

	std::cout << "The ship USS" << _name << " has been finished." << "It is " << _length << " m in length and " << std::endl;
	std::cout << _width << " m in width. " << std::endl;
	std::cout << "It can go to Warp" << _maxWarp << std::endl;

}