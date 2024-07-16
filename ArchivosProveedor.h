#pragma once
#include "Proveedor.h"
#include "ArchivosManager.h"
#include "Helpers.h";


class ArchivosProveedor 
    
{
public:

	ArchivosProveedor(const char* n = "Proveedores.dat");

	

	void AltaProveedor();
	void BajaProveedor();
	void ModificarProveedor();
	void ListarProveedores();
	void BuscarProveedor();

private:
	char _nombre[30];
};

