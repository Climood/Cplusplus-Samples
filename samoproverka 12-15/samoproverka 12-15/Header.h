#pragma once
namespace QueueCode {
	template<class X> class Queue
	{
		X *DynMas;
		int Maxsize, putind, getind;
	public:
		Queue(int len) {
			DynMas = new X[len];
			Maxsize = len;
			putind = getind = 0;
		}
		~Queue() {
			delete[](DynMas);
		}
		void Put(X what) {
			DynMas[putind] = what;
			if (putind < Maxsize)putind++;
		}
		X Get() {
			X a = DynMas[getind];
			if (getind < putind)getind++;
			return a;
		}
	};
	template<class X> class Stack
	{
		X *DynMas;
		int Maxsize, putind, getind;
	public:
		Stack(int len) {
			DynMas = new X[len];
			Maxsize = len;
			putind = getind = 0;
		}
		~Stack() {
			delete[](DynMas);
		}
		void Put(X what) {
			DynMas[putind] = what;
			getind = putind;
			if (putind < Maxsize)putind++;
			if (putind == Maxsize)throw 1;
		}
		X Get() {
			X a = DynMas[getind];
			if (getind > 0)getind--;
			if (putind > 0)putind--;
			return a;
		}
	};
}