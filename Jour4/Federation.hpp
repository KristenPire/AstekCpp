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

			WarpSystem::Core *_core;


		public:
			Ship(int length, int width, std::string name, short maxWarp);
			virtual ~Ship();

			void setupCore(WarpSystem::Core *core);
			void checkCore();
		};
	};

	class Ship
	{
	private:
		const int _length;
		const int _width;
		const std::string _name;
		const short _maxWarp;

		WarpSystem::Core *_core;


	public:
		Ship(int length, int width, std::string name);
		virtual ~Ship() = default;

		void setupCore(WarpSystem::Core *core);
		void checkCore();
	};
};







#endif