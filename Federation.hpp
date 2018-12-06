#ifndef FEDERATION_HPP
#define FEDERATION_HPP

#include <iostream>
#include <string>
#include "WarpSystem.hpp"


namespace Federation{


	namespace Starfleet{
		class Ship{
		public:
			Ship(int length, int width,std::string name,short maxWrap);
			virtual ~Ship()=default;
			int getLength() const;
			int getWidth() const;
			const std::string & getName() const;
			short getMaxWrap()const;
			void setupCore (WarpSystem::Core * core);
			void checkCore ();

		private:
			const int _length;
			const int _width;
			const std::string _name;
			const short _maxWrap;
			WarpSystem::Core *_core;
		};
	};

	class Ship{
		public:
			Ship(int length, int width,std::string name);
			virtual ~Ship()=default;
			int getLength() const;
			int getWidth() const;
			const std::string & getName() const;
			void setupCore (WarpSystem::Core * core);
			void checkCore ();

		private:
			const int _length;
			const int _width;
			const std::string _name;
			const short _maxWrap;
			WarpSystem::Core *_core;
	};
};

#endif