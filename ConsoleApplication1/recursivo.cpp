#ifndef RECURSIVO_H
#define RECURSIVO_H
#include <iostream>
using namespace std;
class recursivo {
	private:
		int inicio, final, cuantos;

	public:
		//Constructor vacio
		recursivo() { }
		//Constructor con parametros y sobre cargado
		recursivo(int inicio, int final) {
			this->inicio = inicio;
			this->final = final;
		}
		recursivo(int inicio, int final, int cuantos) {
			this->inicio = inicio;
			this->final = final;
			this->cuantos = cuantos;
		}
		//Metodos de asignacion
		void asignarIncicio(int incio) { this->inicio = incio; }
		void asignarFinal(int final) { this->final = final; }
		void asignarCuantos(int cuantos) { this->cuantos = cuantos; }
		//Metodos de obtencion
		void imprimirRecursivo() {
			if (final >= inicio) {
				cout << this->inicio << "\n";
				inicio += (cuantos > 1 ? 1 : cuantos);  // Incremento controlado
				imprimirRecursivo();
			}
		}
};
#endif