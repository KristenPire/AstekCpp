#ifndef FIND_HPP
#define FIND_HPP

#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

template <typename T>
typename T::const_iterator do_find(T const&container, int value){
	return std::find(container.begin(), container.end(), value);
}

#endif