#include "Sorcerer.hh"
#include "Victim.hh"

int main(){
	Sorcerer s;
	std::cout << s << std::endl << std::endl;

	Victim v;
	std::cout << v << std::endl << std::endl;

	s.polymorph(v);
	std::cout << std::endl;

	return 0;
}