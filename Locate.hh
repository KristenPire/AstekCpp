
#ifndef LOCATE
#define LOCATE

#include <iostream>
#include <string>

class Locate{
private:
	const int _serial;
	int _x;
	int _y;
	Locate *_tete;


public:
	Locate(int x,int y, int serial);
	~Locate();

	void addCom(int x,int y,int serial);
	void removeCom();
	Locate *getCom();

	const void ping();
	void locateSquad();

};

#endif