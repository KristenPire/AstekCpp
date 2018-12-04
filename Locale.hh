#ifndef LOCALE_HH
#define LOCALE_HH


class Locate
{
public:
	Locate(int x, int y, int serial);
	~Locate();

	void addCom(int x, int y, int serial);
	void removeCom();
	Locate *getCom();

	void ping();
	void locateSquad();

private:
	const int _serial;
	int _x, _y, _members=0;
	Locate *_next;
};



#endif