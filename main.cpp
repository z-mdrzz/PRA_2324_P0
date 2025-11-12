#include "BrazoRobotico.h"

using namespace std;

int main(){
	double x,y,z;
	
	cout << "Dame coordenadas X,Y,Z: ";
	cin >> x >> y >> z;
	
	BrazoRobotico r(x,y,z);
	r.mover(4.5, 4.5, 4.5);
	r.coger();
	if(r.getsujetado()){
		cout << "Esta sujetandose" << endl;
	}
	cout << "El robot ahora esta en " << r.getX() << " " << r.getY() << " " << r.getZ() << " " << endl;

	return 0;
}
