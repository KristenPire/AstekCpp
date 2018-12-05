#include "Sorcerer.hh"
#include "Victim.hh"

int main(){
	Sorcerer s;
	std::cout << s << std::endl << std::endl;

	Victim v;
	Peon p("Garren");
	std::cout << std::endl;

	std::cout << v << std::endl;
	std::cout << p << std::endl << std::endl;

	s.polymorph(v);
	s.polymorph(p);
	std::cout << std::endl;

	return 0;
}