#include <iostream>
#include <string>

class Locate{
public:
 Locate (int x, int y, int serial);
 ~Locate ();

void addCom (int x, int y, int serial);
void removeCom();
Locate *getCom();

void ping();
void locateSquad();

private:
	const int _serial;
	int pos_x;
	int pos_y;
	Locate* locateLie;
};