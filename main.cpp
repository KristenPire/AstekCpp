#include "Paladin.hpp"


int main(){

	Paladin c("poney","Orc","Axe",42);
	
	c.TakeDamage(50);
	c.TakeDamage(200);
	c.TakeDamage(200);

	std::cout << c;

	return 0;
}