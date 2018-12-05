#include "Sorcerer.cpp"


int main(){
	Sorcerer s("Jean", "Le testeur");
	Victim v("Billy");
	std::cout << s << std::endl;
	std::cout << v << std::endl;
	s.polymorph(v);
	return 0;
}
