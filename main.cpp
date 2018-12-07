
#include <iostream>
#include "find.hpp"
#include <vector>


int main(){

	
	std::vector<int> v;
	v={1,2,3,4,5};

	std::vector<int>::iterator it2;


	it2=do_find(v,3);
	

	std::cout<< *it2<<std::endl;
	std::cout<< &it2<<std::endl;
	std::cout<<std::distance(v.begin(),do_find(v,3))<<std::endl;


	it2=do_find(v,10);
	

	std::cout<< *it2<<std::endl;
	std::cout<< &it2<<std::endl;
	std::cout<<std::distance(v.begin(),do_find(v,10))<<std::endl;




	return 0;
}