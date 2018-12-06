#ifndef FEDERATION
#define FEDERATION

#include <iostream>
#include <string>
#include "WarpSystem.hpp"

namespace Federation
{
	namespace Starfleet
	{

		class Ship{
			private:
				const int _length;
				const int _width;
				const std::string _name;
				const short _maxWarp;
				WarpSystem::Core* _core;

			public:
				Ship(int length,int width, std::string name, short maxWarp);
				virtual ~Ship();
				void setupCore(WarpSystem::Core* core);
				const void checkCore();
		};

	};


	class Ship{
			private:
				const int _length;
				const int _width;
				const std::string _name;
				WarpSystem::Core* _core;

			public:
				Ship(int length,int width, std::string name);
				virtual ~Ship()=default;
				void setupCore(WarpSystem::Core* core);
				const void checkCore();
		};



};


#endif