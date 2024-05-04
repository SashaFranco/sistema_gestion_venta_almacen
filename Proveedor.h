#pragma once
#include "Persona.h"
#include "Helpers.h";
#include <iomanip>


class Proveedor :
	public Persona
{
public:

	void mostrarEncabezado();
	void mostrarEncabezado2();

	void AltaProveedor();
	void BajaProveedor();
	void ModificarProveedor();
	void ListarProveedores();
	void BuscarProveedor();

private:
	//ArchivosManager _reg = ArchivosManager("Proveedores.dat");
};
