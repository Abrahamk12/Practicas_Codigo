#include <iostream>
using namespace std;

int main()
{
	int inicio = 0, final = 0, cuantos = 0, opcion = 0, salir;
	cout << "Hello World!\n" << endl;
	cout << "-------------------------------------------------------\t" << endl;
	while (true) {
		cout << "Cuantos numeros quiere imprimir?" << endl;
		cin >> final;
		cout << "Para imprimir de 1 en 1, ingrese: 1<\n Para imprimir de n en n, ingrese: 2" << endl;
		cin >> opcion;

		// Verificar si la entrada falló
		if (cin.fail() || opcion != static_cast<int>(opcion)) {
			cout << "Error: Se ingresó un carácter o un número decimal en lugar de un entero." << endl;
			cin.clear();
			cin.ignore(1000, '\n');  // Limpiar el búfer
		}
		else { printf("Opcion ingresada: %d\t", static_cast<int>(opcion)); }

		switch (opcion) {
			
			case 1:
				cout << "\nDesde que numero quiere empezar a imprimir?" << endl;
				cin >> inicio;
				cout << "Se imprimieron los numeros de 1 en 1 desde " << inicio << " hasta " << final << endl;
				Recursivo rec(inicio, final);
				break;
			case 2:
				cout << "\nDesde que numero quiere empezar a imprimir?" << endl;
				cin >> inicio;
				cout << "Tenga en cuenta que si va mas de 1 en 1, puede llegar al limite mas rapido" << endl;
				cin >> cuantos;
				cout << "\n" << endl;
				break;
		}
		
		cout << "Desea salir? 1: si, 2: no" << endl;
		cin >> salir;
		// Verificar si la entrada falló
		if (cin.fail() || salir != static_cast<int>(salir)) {
			cout << "Error: Se ingresó un carácter o un número decimal en lugar de un entero." << endl;
			cin.clear();
			cin.ignore(1000, '\n');  // Limpiar el búfer
		}
		else { printf("Opcion ingresada: %d\t", static_cast<int>(salir)); break; }
	}
}
