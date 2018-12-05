#include <iostream>
#include <string>

namespace WarpSystem {
	
	class QuantumReactor{
		private:
			bool _stability;
			
		public:
			QuantumReactor();
			~QuantumReactor() = default;
			bool isStable () ;
			void setStability (bool stability) ;
	};
	
	class Core{
		private:
			QuantumReactor *_coreReactor;
			
		public:
			Core(QuantumReactor *coreReactor);
			~Core() = default;
			QuantumReactor *checkReactor();
	};
};
