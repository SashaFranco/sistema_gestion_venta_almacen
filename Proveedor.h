#pragma once
#include "Persona.h"
#include <iostream>
using namespace std;

class Proveedor:Persona
{
public:
	Proveedor();
	void setTipoProducto(char tipoProducto);
	char* getTipoProducto();
	void setTipoProducto(const char* tipoProducto);

	void Cargar();
	void Mostrar();

protected:

	char _tipoProducto[30];
};

