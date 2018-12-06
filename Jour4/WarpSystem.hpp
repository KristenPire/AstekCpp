#ifndef WARPSYSTEM_HPP
#define WARPSYSTEM_HPP

namespace WarpSystem
{
	class QuantumReactor
	{
	private:
		bool _stability;
		


	public:
		QuantumReactor();
		virtual ~QuantumReactor();

		bool isStable();
		void setStability(bool stability);
	};
	

	class Core
		{
		private:
			QuantumReactor *_coreReactor;


		public:
			Core(QuantumReactor *coreReactor);
			~Core();

			QuantumReactor *checkReactor();
		};
};

#endif