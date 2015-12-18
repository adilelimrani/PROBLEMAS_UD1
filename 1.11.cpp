#include <iostream>
using namespace std;

int main() {

	double teoria,practicas,problemas,nota;

	cout << "introducir las notas de teoria, practicas y problemas: ";
	cin >> teoria >> practicas >> problemas;

	nota= (0.7*teoria)+(0.2*practicas)+(0.1*problemas);

	cout << "el resultado de a calificación es: " << nota << endl;

	return 0;
}
