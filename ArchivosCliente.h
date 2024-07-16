#pragma once

#include "Helpers.h";


class ArchivosCliente 
    
{
public:

	ArchivosCliente(const char* n = "Clientes.dat");

	void mostrarEncabezado();
	void mostrarEncabezado2();

	void AltaCliente();
	void BajaCliente();
	void ModificarCliente();
	void ListarClientes();
	void BuscarCliente();


private:
	char _nombre[30];
	
};

