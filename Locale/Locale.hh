#include <string>
#include <iostream>

class Locate{
	private:
		const int serial;
		int x;
		int y;
		Locate *linked_locate;

	public:
		Locate(int x_, int y_, int serial_);
		~Locate();
		void addCom(int x_, int y_, int serial_);
		Locate *getCom();
		void removeCom();
		const void ping();
		const void locateSquad();
};
