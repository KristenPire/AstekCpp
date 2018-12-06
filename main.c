#include "Character.hpp"


int main(){

	Character c("poney","Orc",42);
	
	c.TakeDamage(50);
	c.TakeDamage(200);
	c.TakeDamage(200);

	std::cout << c;

	return 0;
}