#include "Cliente.h"




Cliente::Cliente(){

	_categoria = false;
}

void Cliente::setCategoria(bool categoria) { _categoria = categoria; }

bool Cliente::getCategoria() { return _categoria; }

void Cliente::Mostrar() {

	if (_categoria == true) {
		Persona Mostrar();
		cout << setw(35) << "Cliente: minorista";
	}
	else if (_categoria == false) {
		Persona Mostrar();

		cout << setw(35) << "Cliente: mayorista";


	}
}

void Cliente::Cargar() {
	cout << "Opción 0 Mayorista , Opción 1 Minorista";
	cin >> _categoria;
	if (_categoria==1){
		_categoria = true;
		
		
	Persona Cargar();
	}
	else {
		_categoria = false;
		
		Persona Cargar();
	}
