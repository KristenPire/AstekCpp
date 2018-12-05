#include <iostream>
#include <string>

namespace Federation {
	
	namespace Starfleet {
		
		class Ship{
			private:
				const int _length;
				const int _width;
				std::string _name;
				short _maxWarp;
			
			public:
				Ship(int length , int width , std :: string name , short maxWarp);
				~Ship() = default;
				void setupCore(Core *core);
				void checkCore();
		};
		
	};
};
