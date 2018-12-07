#include <iostream>

template<typedef InputIT,typedef T> 

InputIT do_find(InputIT first,InputIT second,int b){
	
	auto result = std::find(first,second,b);

	if (result != second) {
        std::cout << "v contains: " << b << '\n';
    } else {
        std::cout << "v does not contain: " << b << '\n';
    }

    return result;

}