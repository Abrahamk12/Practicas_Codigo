#include <iostream>
using namespace std;

class Personas {
	private :
		string nombre;
		string direccion;
		int edad;
		double altura;
	public :
		// Constructor
		Personas() { }
		// Constructor con parámetros
		Personas(string nom, string dir, int ed, double alt) {
			this->nombre = nom;
			this->direccion = dir;
			this->edad = ed;
			this->altura = alt;
		}
		//Asignacion de datos
		void asignarNombre(string nom) {
			this->nombre = nom;
		}
		void asignarDireccion(string dir) {
			this->direccion = dir;
		}
		void asignarEdad(int ed) {
			this->edad = ed;
		}
		void asignarAltura(double alt) {
			this->altura = alt;
		}
		string obtenerNombre() {
			return  this->nombre;
		}
		string obtenerDireccion() {
			return  this->direccion;
		}
		int obtenerEdad() {
			return  this->edad;
		}
		double obtenerAltura() {
			return  this->altura;
		}
		// Método para mostrar los datos
		void mostrarDatos() {
			printf("Nombre: %s, Direccion: %s, Edad: %d, Altura: %.2f\n", this->nombre.c_str(), this->direccion.c_str(), this->edad, this->altura);
		}
};