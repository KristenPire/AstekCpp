#include "Locale.hh"

Locate::Locate(int x, int y, int serial):_serial(serial), pos_x(x),pos_y(y){
	pos_x=x;
	pos_y=y;
	locateLie=NULL;
};

Locate::~Locate(){

};

void Locate::addCom (int x, int y, int serial){
	Locate *nouveauLocate=new Locate(x,y,serial);
	if (locateLie == NULL){
		locateLie=nouveauLocate;
	}else{
		nouveauLocate->locateLie=this->locateLie;
		locateLie=nouveauLocate;
	}
};

void Locate::removeCom(){
	Locate* locate=locateLie;
	locateLie=locate->locateLie;
	delete locate;
};

Locate *Locate::getCom(){
	return locateLie;
};

void Locate::ping(){
	std::cout<< " Locate "<< _serial << " currently at "<< pos_x << " "<< pos_y <<std::endl;
};

void Locate::locateSquad(){
	Locate* locate=this->locateLie;
	while(locate!=NULL){
		std::cout<< " Locate "<< locate->_serial << " currently at "<< locate->pos_x << " "<< locate->pos_y <<std::endl;
		locate=locate->locateLie;
	}
	std::cout<< " Locate "<< _serial << " currently at "<< pos_x << " "<< pos_y <<std::endl;
};

int main(){
	Locate k(42, 32, 101010);

	k.addCom(56,25,65);
	k.addCom(73,34,51);

	k.locateSquad();

	k.removeCom();
	k.locateSquad();

	k.removeCom();
	k.locateSquad();


	return 0;
}