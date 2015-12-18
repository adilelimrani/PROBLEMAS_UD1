#include <iostream>
#include <cmath>
using namespace std;

int main() {

	double a,b,c,resultado1,resultado2;

	cout << "introduzca a: ";
	cin >> a;
	cout << "introduzca b: ";
	cin >> b;
	cout << "introduzca c: ";
	cin >> c;

	resultado1 = (-b + sqrt((b*b)-(4*a*c)))/(2*a);
	resultado2 = (-b - sqrt((b*b)-(4*a*c)))/(2*a);

	cout << "las raices son: " << resultado1 << " " << resultado2 << endl;
	return 0;
}
