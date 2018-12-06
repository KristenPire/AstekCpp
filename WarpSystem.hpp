#ifndef WARPSYSTEM_HPP
#define WARPSYSTEM_HPP

#include <iostream>
#include <string>

namespace WarpSystem{
	class QuantumReactor{
	public:
		QuantumReactor();
		virtual ~QuantumReactor()=default;
		bool isStable();
		void setStability (bool stability);
	private:
		bool _stability;
	};

	class Core{
	public:
		Core(QuantumReactor * coreReactor);
		virtual ~Core()=default;
		QuantumReactor* checkReactor();
	private:
		QuantumReactor * _coreReactor;
	};
};


#endif