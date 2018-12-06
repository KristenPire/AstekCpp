#ifndef WARPSYSTEM
#define WARPSYSTEM
#include <iostream>

namespace WarpSystem
{

	class QuantumReactor{

		private:
			bool _stability;

		public:
			QuantumReactor();
			virtual ~QuantumReactor()=default;
			bool isStable() const;
			void setStability(bool stability);



	};


	class Core{

		private:
			QuantumReactor* _coreReactor;

		public:
			Core(QuantumReactor* coreReactor);
			virtual ~Core() = default;
			const QuantumReactor* checkReactor() const;

	};
	
};

#endif