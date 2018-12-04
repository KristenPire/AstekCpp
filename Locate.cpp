
#include "Locate.hh"

Locate::Locate(int x,int y, int serial):_serial(serial),_x(x),_y(y){

	_tete = NULL;
	std::cout << "Locate " << _serial << " initialised" << std::endl;

}

Locate::~Locate(){

	std::cout << "Locate " << _serial << " shutting down" << std::endl;
}

void Locate::addCom(int x,int y, int serial){

/*Creates a new Locate .
If the current Locate is not linked to any Locate , it is linked to the newly created one:

+ - - - +     + - - - - - -  - - - - - - -+
| this  | --> | new Locate x , y , serial |
+ - - --+     + - - -- - - - - - - - - - -+

If the current Locate is already linked to another Locate, then the new Locate will replace it (see below):

+ - - -+     + -- - - - - - - - - - - - -+     + - - - - - - - - - - - - - - - -+
| this | --> | new Locate x , y , serial | --> | Locate that was linked to this |
+ - - -+     + - - - - -- - - - - - - - -+     + - - - - - - - - - - - - - - - -+
*/

	if(_tete==NULL){
		_tete = new Locate(x,y,serial);
	}
	else
	{

		Locate* safe;
		safe = _tete;
		_tete = new Locate(x,y,serial);
		_tete->_tete = safe;
	}

}


void Locate::removeCom(){
	/*
	removes the linked Locate
	*/

	Locate* safe;
	safe = _tete->_tete;
	delete _tete;
	_tete = safe;

}

Locate *Locate::getCom(){
	/*
	returns a pointer to the Locate linked to the current instance. 
	If it is not linked, returns a null pointer
	*/
	return _tete;
}

const void Locate::ping(){
	/*
	It has a ping member function that prints the following information to the standard output:
	Locate [ SERIAL ] currently at [ X ] [ Y ]
	*/

	std::cout << "Locate [" << _serial << " ] currently at " << "[ ";
	std::cout << _x << " ] [ " << _y << " ]" << std::endl;

}
void Locate::locateSquad(){
	Locate* safe = _tete;

	while(safe!= NULL)
	{
		safe->Locate::ping() ;
		safe = safe->_tete;
	}

	Locate::ping() ;



}