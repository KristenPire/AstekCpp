#include <string>
#include <iostream>

class Locate{
	private:
		const int serial;
		int x;
		int y;

	public:
		Locate(int x_, int y_, int serial_);
		void addCom(int x_, int y_, int serial_);
		Locate *getCom();
		void informations();
};
