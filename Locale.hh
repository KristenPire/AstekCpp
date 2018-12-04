class Locate{
private:
	const int _serial;

public:
	Locate(int x,int y, int serial);
	~Locate();

	void addCom(int x,int y,int serial);
	void removeCom();
	Locate *getCom();

	void ping();
	void locateSquad();

};