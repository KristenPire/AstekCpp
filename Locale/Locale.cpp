#include "Locale.hh"

Locate::Locate(int x_, int y_, int serial_): serial(serial_), x(x_), y(y_), linked_locate(NULL)  //Utilisation d' init list pour definir serial malgré le static
{
	std::cout << "Locate " << this->serial << " initialised" << std::endl;
}

Locate::~Locate(){
	std::cout << "Locate " << this->serial << " shutting down" << std::endl;
}

void Locate::addCom(int x_, int y_, int serial_){
	
	Locate *L = new Locate(x_, y_, serial_);
	L->linked_locate = this->linked_locate;
	this->linked_locate = L;
	
}

Locate* Locate::getCom(){
	return(this->linked_locate);
}

void Locate::removeCom(){
	Locate *l = this->linked_locate;
	this->linked_locate = l->getCom();
	delete l;
	
}

const void Locate::ping(){
	std::cout << "Locate " << this->serial << " currently at " << x << " " << y << std::endl;
}

const void Locate::locateSquad(){	
	Locate * tmp;
	tmp = this->linked_locate;
	while(tmp !=NULL){
		tmp->ping();
		tmp = tmp->linked_locate;
	}
	this->ping();
}


int main(){
	Locate k(42, 32, 101010);
	
	k.addCom(56, 25, 65);
	k.addCom(73, 34, 51);
	std::cout << "--------------Display the links--------------" << std::endl;
	k.locateSquad();
	std::cout << "--------------Remove 51--------------" << std::endl;
	k.removeCom();
	std::cout << "--------------Should have removed 51, Let's Check--------------" << std::endl;
	k.locateSquad();
	k.removeCom();

	return 0;
}
