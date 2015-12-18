//vamos a hacer un programa que en la entrada coge un numero
// y en la salida estandar su "tabla de multiplicar"


#include <iostream>
using namespace std;

int main() {

	double numero;

	cout << "Introduzca el numero: ";
	cin >> numero;

	cout << numero << " * " << "1" << " = " << numero*1 << endl;
	cout << numero << " * " << "2" << " = " << numero*2 << endl;
	cout << numero << " * " << "3" << " = " << numero*3 << endl;
	cout << numero << " * " << "4" << " = " << numero*4 << endl;
	cout << numero << " * " << "5" << " = " << numero*5 << endl;
	cout << numero << " * " << "6" << " = " << numero*6 << endl;
	cout << numero << " * " << "7" << " = " << numero*7 << endl;
	cout << numero << " * " << "8" << " = " << numero*8 << endl;
	cout << numero << " * " << "9" << " = " << numero*9 << endl;
	cout << numero << " * " << "10" << " = " << numero*10 << endl;
	return 0;
}
