#include "Find.hpp"

#include <iostream>
#include <vector>


int main()
{
	int serie[] = {5, 3, 7, 9, 1, 6, 4, 8, 2};
	std::vector<int> vecteur (serie, serie+9);

	std::cout<<"position : "<<*do_find(vecteur, 6)<<std::endl;

	return 0;

}