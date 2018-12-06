#ifndef FEDERATION_HPP
#define FEDERATION_HPP

#include <string>
#include <iostream>
#include "WarpSystem.hpp"


namespace Federation
{
	namespace Starfleet
	{
		class Ship
		{
		private:
			const int _length;
			const int _width;
			const std::string _name;
			const short _maxWarp;

			WarpSystem::QuantumReactor::Core *_core;


		public:
			Ship(int length, int width, std::string name, short maxWarp);
			virtual ~Ship() = default;

			void setupCore(WarpSystem::QuantumReactor::Core *core);

		};
	};
};







#endif