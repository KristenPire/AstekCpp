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
				virtual ~Ship()=default;
				void setupCore(WarpSystem::Core* core);

		};

	};


	class Ship{
			private:
				const int _length;
				const int _width;
				const std::string _name;
				const short _maxWarp;
				WarpSystem::Core* _core;

			public:
				Ship(int length,int width, std::string name, short maxWarp);
				virtual ~Ship()=default;
				void setupCore(WarpSystem::Core* core);

		};

		

};


#endif