#ifndef WARPSYSTEM
#define WARPSYSTEM

#include <iostream>
#include <string>

namespace WarpSystem{
	class QuantumReactor{
		public:
			QuantumReactor();
			virtual ~QuantumReactor();// = default;
			// QuantumReactor(const QuantumReactor&) = delete;
			// QuantumReactor &operator=(const QuantumReactor&) = delete;
		
			bool isStable();
			void setStability(bool stability);

		private:
			bool _stability;
	};

	class Core{
		public:
			Core(QuantumReactor* coreReactor);
			virtual ~Core();

			QuantumReactor* checkReactor();

		private:
			QuantumReactor* _coreReactor;
	};
};

#endif