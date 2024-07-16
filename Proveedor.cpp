#include "Proveedor.h"


Proveedor::Proveedor() {

	strcpy_s(_tipoProducto, "");

}

void Proveedor::setTipoProducto(const char* tipoProducto) { strcpy_s(_tipoProducto, tipoProducto); }
char* Proveedor::getTipoProducto() { return _tipoProducto; }

void Proveedor::Mostrar() {
	Persona Mostrar();
	cout << setw(35) << getTipoProducto();

}

void Proveedor::Cargar() {
	char tipoProducto[30];

	Persona Cargar();
	cout << "Tipo de Producto";
	cin.getline(tipoProducto, sizeof(tipoProducto));
	cout << endl;

}
