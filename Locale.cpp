
#include "Locale.hh"

Locate::Locate(int x,int y, int serial):_x(x),_x(y),_serial(serial){

}

Locate::~Locate(){

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
	

	Locate *A = new Locate(x,y,serial);


}


void Locate::removeCom();
Locate *Locate::getCom();

void Locate::ping();
void Locate::locateSquad();