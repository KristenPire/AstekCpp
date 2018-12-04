#ifndef LOCATE_HH
#define LOCATE_HH

#include <iostream>

class Locate{
	public:
		Locate(int x, int y, int serial);
		~Locate();

		void addCom(int x, int y, int serial);
		void removeCom();
		Locate* getCom();

		void ping();
		void locateSquad();

	private:
		int _x;
		int _y;
		const int _serial;
		Locate *_next;
};

#endif