#include "Character.hpp"

#include <iostream>
#include <string>

int main()
{
	Character c("poney", 42);

	c.TakeDamage(50);
	c.TakeDamage(200);
	c.TakeDamage(200);
	return 0;
}