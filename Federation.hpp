#include <iostream>
#include <string>
#ifndef WARPSYST
#define WARPSYST
#include "WarpSystem.hpp"
#endif

namespace Federation {
	
	class Ship{ //Independant ships
		private:
				const int _length;
				const int _width;
				const std::string _name;
				const short _maxWarp;
				WarpSystem::Core *_core;
				
				Ship(const Ship &) = delete;
			
			public:
				Ship(int length, int width, std::string name);
				virtual ~Ship() = default;
				void setupCore(WarpSystem::Core *core);
				void checkCore();
	};
	
	namespace Starfleet {
		
		class Ship{
			private:
				const int _length;
				const int _width;
				const std::string _name;
				const short _maxWarp;
				WarpSystem::Core *_core;
				
				Ship(const Ship &) = delete;
			
			public:
				Ship(int length, int width, std::string name, short maxWarp);
				virtual ~Ship() = default;
				void setupCore(WarpSystem::Core *core);
				void checkCore();
		};
		
	};
};
