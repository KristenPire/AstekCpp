#include <iostream>
#include <string>

namespace WarpSystem {
	
	class QuantumReactor{
		private:
			bool _stability;
			
			QuantumReactor(const QuantumReactor &) = delete;
			
		public:
			QuantumReactor();
			virtual ~QuantumReactor() = default;
			bool isStable();
			void setStability(bool stability);
	};
	
	class Core{
		private:
			QuantumReactor *_coreReactor;
			
			Core(const Core &) = delete;
			
		public:
			Core(QuantumReactor *coreReactor);
			virtual ~Core() = default;
			QuantumReactor *checkReactor();
	};
};
