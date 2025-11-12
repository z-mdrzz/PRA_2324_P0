#include <iostream>
using namespace std;

class BrazoRobotico{
	private:
		double x;
		double y;
		double z;
		bool sujetado;
	public:
		BrazoRobotico(double x, double y, double z);
		double getX();
		double getY();
		double getZ();
		bool getsujetado();
		void coger();
		void soltar();
		void mover(double x, double y, double z);
};
