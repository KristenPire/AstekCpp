
#ifndef LOCALE
#define LOCALE

#include <iostream>
#include <string>

class Locate{
private:
	const int _serial;
	int x;
	int y;

public:
	Locate(int x,int y, int serial);
	~Locate();

	void addCom(int x,int y,int serial);
	void removeCom();
	Locate *getCom();

	void ping();
	void locateSquad();

};