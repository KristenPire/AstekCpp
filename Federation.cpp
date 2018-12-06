#include "Federation.hpp"

// constructeur

Federation::Starfleet::Ship::Ship(int length, int width,std::string name,short maxWrap):_length(length),_width(width),_name(name),_maxWrap(maxWrap){
	std::cout<< " This ship USS " << _name << " has been finished . It is "<< _length << "m in length and " << _width << "m in width ."<<std::endl;
	std::cout<< " It can go to Wrap " << _maxWrap<< "!"<<std::endl;
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