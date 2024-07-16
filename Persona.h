#pragma once
#include <iostream>
using namespace std;
#include "Fecha.h"
#include <iomanip>
#include "Helpers.h"

class Persona
{
public:

	Persona();

	void Cargar();
	void Mostrar();
	void Mostrar2();///VER QUE MUESTRA

	void setId(int id);
	void setDni(int d);
	void setNombre(const char* nombre);
	void setApellido(const char* apellido);
	
	void setEmail(const char* email);
	void setFechaAlta();
	void setEstado(bool estado);

	int getDNI();
	int getId();
	char* getNombre();
	char* getApellido();
	
	char* getEmail();
	Fecha getFechaAlta();
	bool getEstado();

protected:
	int _dni, _id;
	char _nombre[40], _apellido[40];
	char _email[50];///borramos direccion
	Fecha _fechaAlta;///ELEGIR FECHA NACIM O FECHA ALTA
	bool _estado;
};

