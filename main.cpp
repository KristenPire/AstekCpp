
#include "find.hpp"

#include <vector>
#include <iostream>
#include <iomanip>


int main(){
	std::vector<int> tab = { 4, 9, 1, 1, 99, 8, 42, 42, 42, -1, 3 };
	
	std::cout << std::distance(tab.begin(), do_find(tab, 1)) << std::endl;
	std::cout << std::distance(tab.begin(), do_find(tab, 999)) << std::endl;
	
	
	return 0;
}
