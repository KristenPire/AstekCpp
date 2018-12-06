#include "Federation.hpp"

// constructeur de ship de federation

Federation::Starfleet::Ship::Ship(int length, int width,std::string name,short maxWrap):_length(length),_width(width),_name(name),_maxWrap(maxWrap){
	_core=NULL;
	std::cout<< " This ship USS " << _name << " has been finished . It is "<< _length << "m in length and " << _width << "m in width ."<<std::endl;
	std::cout<< " It can go to Wrap " << _maxWrap<< "!"<<std::endl;
};

// getteurs de ship de federation

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

void Federation::Starfleet::Ship::setupCore (WarpSystem::Core * core){
	_core=core;
	std::cout<<"USS "<< _name <<" :  The core is ";
	if (core->checkReactor()->isStable()){
		std::cout<< "stable at the time ."<<std::endl;
	}else{
		std::cout<< "unstable at the time ."<<std::endl;
	}
};

