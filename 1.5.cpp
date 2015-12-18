// vamos a corregir el ejercicio 5 de la pagina 43


#include <iostream>
#include <cmath>
using namespace std;/*la sentencia modo god no esta puesta*/

int main() {

	double valor,base;/*double tiene la "d" en mayuscula*/

	cout << "Indique base: " ;/* cin tiene que estar en otra linea*/
	cin >> base;/*el simbolo "<<" esta al reves y ademas falta ";"*/
	cout << "induque valor: ";
	cin >> valor;/* cin tiene que estar en otra linea*/
	cout << "el log en base " << base << " de " << valor << " es: " << endl;
//"es" tiene que estar entre comillar, y tenemos que poner endl
	cout << log(valor)/log(base) << endl;
	return 0;/*han omitido esta sentencia y papi jaime la quiere siempre*/
}
