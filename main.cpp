#include "Locate.hh"

int main(){
	Locate k(42, 32, 101010);

	k.addCom(56, 25, 65);
	k.addCom(73, 34, 51);

	k.locateSquad();

	k.removeCom();
	k.removeCom();

	return 0;
}