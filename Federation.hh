#ifndef FEDERATION_HH
#define FEDERATION_HH

#include "WarpSystem.hh"

namespace Federation{

	namespace Starfleet{

		class Ship{
			public:
				Ship(int length = 0, int width = 0, std::string name = "", short maxWarp = 0);
				virtual ~Ship();

				void setupCore(WarpSystem::Core* core);
				void checkCore();

			private:
				int _length;
				int _width;
				std::string _name;
				short _maxWarp;
				WarpSystem::Core* _core;
		};
	};

	class Ship{
		public:
			Ship(int length = 0, int width = 0, std::string name = "", short maxWarp = 0);
			virtual ~Ship();

			void setupCore(WarpSystem::Core* core);
			void checkCore();

		private:
			int _length;
			int _width;
			std::string _name;
			short _maxWarp;
			WarpSystem::Core* _core;
	};
};

#endif