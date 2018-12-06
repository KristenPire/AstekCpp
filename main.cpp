
#include <iostream>
#include "Character.hpp"


int main(){
	Character c("poney", 42);

	c.TakeDamage(50);
	c.TakeDamage(50);
	c.TakeDamage(50);


	return 0;
}