#include "Federation.hpp"

// constructeur

Federation::Starfleet::Ship::Ship(int length, int width,std::string name,short maxWrap):_length(length),_width(width),_name(name),_maxWrap(maxWrap){

};

// getteurs

int Federation::Starfleet::Ship::getLength()const{
	return _length;
};

int Federation::Starfleet::Ship::getWidth()const{
	return _width;
};

const std::string & Federation::Starfleet::Ship::getName()const{
	return _name;
};

short Federation::Starfleet::Ship::getMaxWrap()const{
	return _maxWrap;
};