#include <iostream>
#include <string>
#include <iterator>
#include <algorithm>

template<typename T> 
typename T::iterator const do_find(T &a, int i) { 
    return std::find(std::begin(a), std::end(a), i); 
}

