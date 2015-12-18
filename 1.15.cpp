//vamos a crear un programa que escriba en la salida estándar 
// los valores de "Pi0", "Pi1" y "Pi2" según la formula de Borwein


#include <iostream>
#include <cmath>
using namespace std;
int main()	{

	double x0,x1,x2,y1,y2,pi0,pi1,pi2;

	x0=sqrt(2); 
	x1=(1/2)*((sqrt(x0))+(1/(sqrt(x0))));
	x2=(1/2)*((sqrt(x1))+(1/(sqrt(x1))));
	y1=pow(2,(1/4));
	y2=((y1*(sqrt(x1)))+(1/(sqrt(x1))))/(y1+1);
	pi0=2+sqrt(2);
	pi1=pi0*(((x1)+1)/((y1)+1));
	pi2=pi1*(((x2)+1)/((y2)+1));
	

	cout << "Pi0= " << pi0 << endl;
	cout << "Pi1= " << pi1 << endl;
	cout << "Pi2= " << pi2 << endl;

	return 0;
}
