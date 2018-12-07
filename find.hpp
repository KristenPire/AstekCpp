#ifndef FIND_HPP
#define FIND_HPP

#include <iostream>
#include <iterator>
#include <algorithm>

template<typename Type>
typename Type::iterator const do_find(Type & refToTemplate, int integer){
	return  std::find(std::begin(refToTemplate),std::end(refToTemplate),integer);
};


#endif