#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int imprimirRecursivo(int inicio, int final) {
	if (final >= inicio) {
		cout << inicio << "\n";
		inicio ++;
		imprimirRecursivo(inicio, final);
	}
	return 0;
}

int imprimirRecursivo(int inicio, int final, int cuantos) {
	if (final >= inicio) {
		cout << inicio << "\n";
		inicio+=cuantos;
		imprimirRecursivo(inicio, final, cuantos);
	}
	return 0;
}

int main()
{
	int inicio = 0, final = 0, cuantos = 0;
    cout << "Hello World!\n" << endl;
	cout << "-------------------------------------------------------\t" << endl;
	cout << "Cuantos numeros quiere imprimir?" << endl;
	cin >> final;
	cout << "\nDesde que numero quiere empezar a imprimir?" << endl;
	cin >> inicio;
	cout << "\nQuiere que se impriman de 1 en 1 o de n en n?\n"
		 << "Tenga en cuenta que si va mas de 1 en 1, puede llegar al limite mas rapido" << endl;
	cin >> cuantos;
	cout << "\n" << endl;
	imprimirRecursivo(inicio, final, cuantos);
}
