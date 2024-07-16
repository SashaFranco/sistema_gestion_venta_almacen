#pragma once
#include "Persona.h"


#include <iostream>
using namespace std;

class Cliente:Persona
{
public:
	Cliente();
	void setCategoria(bool categoria);
	bool getCategoria();
	void Cargar();
	void Mostrar();

protected:

	bool _categoria;
};

