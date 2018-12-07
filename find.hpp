#include <iostream>
#include <string>
#include <iterator>
#include <algorithm>

template<typename T> 
T const &do_find(T const &a, int i) { 
    return std::find(std::begin(a), std::end(a), i); 
}

