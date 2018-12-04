#include "Locate.hh"

Locate::Locate(int x, int y, int serial) : _x(x), _y(y), _serial(serial){
	_next=NULL;
	std::cout << "Locate " << _serial << " initialized" << std::endl;
}

Locate::~Locate(){
	std::cout << "Locate " << _serial << " shutting down" << std::endl;
}

void Locate::addCom(int x, int y, int serial){
	Locate* newLocate = new Locate(x, y, serial);
	if(_next==NULL)
		_next = newLocate;
	else{
		newLocate->_next = _next;
		_next = newLocate;
	}
}

void Locate::removeCom(){
	Locate* rLocate;
	rLocate = _next;
	_next = _next->_next;
	delete rLocate;
}

Locate* Locate::getCom(){
	return _next;
}

void Locate::ping(){
	std::cout << "Locate " << _serial << " currently at " << _x << " " << _y << std::endl;
}

void Locate::locateSquad(){
	Locate *l = _next;

	while (l!=NULL){
		l->ping();
		l = l->_next;
	}

	ping();
}