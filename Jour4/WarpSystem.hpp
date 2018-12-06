#ifndef WARPSYSTEM_HPP
#define WARPSYSTEM_HPP

namespace WarpSystem
{
	class QuantumReactor
	{
	private:
		bool _stability;
		class Core
		{
		private:
			QuantumReactor *_coreReactor;


		public:
			Core(QuantumReactor *coreReactor);
			~Core();

			QuantumReactor *checkReactor();
		};



	public:
		QuantumReactor();
		virtual ~QuantumReactor();

		bool isStable();
		void setStability(bool stability);



	};

};




#endif