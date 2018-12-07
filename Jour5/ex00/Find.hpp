#ifndef FIND_HPP
#define FIND_HPP

#include <algorithm>

template <typename T> 
typename T::iterator do_find(T& container, int value)
{
	return std::find(container.begin(), container.end(), value);

}

#endif