#include "Droid.cpp"



int main(){
	Droid d;
	//~ std::cout << d << std::endl;
	//~ std::cout << "Je cree batterie" << std::endl;
	//~ size_t batterie = 10;
	//~ size_t a = 5;
	//~ size_t b = 25;
	//~ std::cout << "Je charge" << std::endl;
	//~ d << a << b << batterie;
	//~ std::cout << "J'ai charge" << std::endl;	
	//~ std::cout << d << std::endl;
	//~ std::cout << "Batterie :" << batterie << std::endl;
	
	Droid d1("Avenger");
	size_t Durasel = 200;
	
	std::cout << d << std::endl;
	std::cout << d1 << std::endl;	
	d = d1;
	d.setStatus(new std::string("Kill Kill Kill!"));
	d << Durasel;
	std::cout << d << "--" << Durasel << std::endl;
	Droid d2 = d;
	d.setId("Rex");
	std::cout << (d2 != d) << std::endl;
	return 0;
}
