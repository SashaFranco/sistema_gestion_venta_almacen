#include "Cliente.h"

void Cliente::mostrarEncabezado()
{
	cout << left;
	cout << setw(5) << "ID";
	cout << setw(15) << "DNI";
	cout << setw(20) << "NOMBRES";
	cout << setw(20) << "APELLIDOS";
	cout << setw(35) << "EMAIL";
	cout << setw(45) << "DOMICILIO";
	cout << setw(55) << "FECHA DE ALTA" << endl;
	cout << "-------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
}
void Cliente::mostrarEncabezado2()
{
	cout << left;
	cout << setw(15) << "DNI";
	cout << setw(20) << "NOMBRES";
	cout << setw(20) << "APELLIDOS";
	cout << setw(35) << "EMAIL";
	cout << setw(45) << "DOMICILIO";
	cout << setw(55) << "FECHA DE ALTA" << endl;
	cout << "hola";
	cout << "-------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
}

