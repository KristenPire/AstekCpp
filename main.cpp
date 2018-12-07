#include "find.hpp"

int main(){
	std::vector<int> v;
	for (int i=0 ; i<10 ; i++)
		v.push_back(i);

 	auto myIterator = do_find(v,2);

 	std::cout << *myIterator << std::endl;

	return 0;
}