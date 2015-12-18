#include <iostream>
using namespace std;

int main() {

/*los centimos hay que declararlos como double para que no salga truncado el numero*/
	double precio, pagado, centimos;

	cout << "escriba precio y dinero entregado: ";
	cin >> precio >> pagado;
	centimos=100*(pagado-precio);
	cout << "hay que devolver: " << centimos << " céntimos" << endl;
	return 0;
}
