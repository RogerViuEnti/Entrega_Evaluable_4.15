/*#include <iostream>

int main() {
	double valor = 4;
	double pi =	0;
	double pi2 = 0;
	double divisor1;
	double divisor2;
	std::cout << "Termino:          Pi:          \n";
	for (int i = 1; i < 20; i+=2) {
		divisor1 = 2 * i - 1;
		divisor2 = 2 * (i+1) - 1;
		pi += (valor / divisor1);
		pi2 = pi - (valor / divisor2);
		std::cout << i << "                    " << pi << "          \n";
		std::cout << (i+1) << "                    " << pi2 << "          \n";
	}


	return 0;
}*/
#include <iostream>

using namespace std;

int main() {
    int totalTerminos = 200000;
    double pi = 0.0;
    double denominador = 1.0;
    int signo = 1; // 1 para sumar, -1 para restar

    int terminosNecesarios = 0;
    bool encontrado = false;

    cout << "Accuracy set at: " << totalTerminos << endl;
    cout << "term\tpi" << endl;

    for (int i = 1; i <= totalTerminos; i++) {
        pi = pi + (signo * (4.0 / denominador));
            cout << i << "\t" << pi << endl;
        if (!encontrado) {
			if (pi >= 3.141589 && pi < 3.141600) { //3.14159 tiene que estar entre 3.141589 y 3.141600
                terminosNecesarios = i;
                totalTerminos = i;
                encontrado = true; // Guardamos el momento en que se cumple por primera vez
            }
        }

     
        signo = signo * (-1);      
        denominador = denominador + 2.0; // Preparar signo y denominador para siguiente for
    }

    cout << "..." << endl;
    cout << "\nTerminos necesarios para obtener por primera vez un valor que empiece por 3.14159: " << terminosNecesarios << endl;

    return 0;
}