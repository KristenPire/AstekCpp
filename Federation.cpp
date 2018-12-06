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
	std::cout<<"USS "<< _name <<" :  The core is set ."<<std::endl;
};

void Federation::Starfleet::Ship::checkCore()
{
	std::cout<<"USS "<< _name <<" :  The core is ";
	if (_core->checkReactor()->isStable()){
		std::cout<< "stable at the time ."<<std::endl;
	}else{
		std::cout<< "unstable at the time ."<<std::endl;
	}
}

// creation d'un bateau en dehors de starfleet

Federation::Ship::Ship(int length, int width,std::string name):_length(length),_width(width),_name(name),_maxWrap(1){
	_core=NULL;
	std::cout<< " The independant ship " << _name << " just finished its construction . It is "<< _length << "m in length and " << _width << "m in width ."<<std::endl;
};

int Federation::Ship::getLength()const{
	return _length;
};

int Federation::Ship::getWidth()const{
	return _width;
};

const std::string & Federation::Ship::getName()const{
	return _name;
};


void Federation::Ship::setupCore (WarpSystem::Core * core){
	_core=core;
	std::cout<< _name <<" :  The core is set ."<<std::endl;
};

void Federation::Ship::checkCore()
{
	std::cout<< _name <<" :  The core is ";
	if (_core->checkReactor()->isStable()){
		std::cout<< "stable at the time ."<<std::endl;
	}else{
		std::cout<< "unstable at the time ."<<std::endl;
	}
}