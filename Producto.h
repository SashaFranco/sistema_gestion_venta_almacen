#pragma once
#include <iostream>
using namespace std;
#include "Fecha.h"
#include <iomanip>
#include "Helpers.h"
#include "Cliente.h"
#include "Proveedor.h"

class Producto
{
public:

	Producto();
	Producto(int id,const char* nombre, int precioVenta,int precioCompra,int cantidad);

	void CargarProducto();
	void MostrarProducto();
	void MostrarProducto2();

	void SetId(int id);
	void SetCantidad(int cantidad);
	void SetNombre(const char * nombre);
	void SetFecha();
	void SetEstado(bool estado);
	void SetPrecioVenta(float precioVenta);
	void SetPrecioCompra(float precioCompra);
	void SetDescripcion(const char* desc);
	
	int GetId() const;
	int GetCantidad() const;
	char* GetNombre();
	char* GetDescripcion();
	Fecha GetFecha() const;
	bool GetEstado() const;
	float GetPrecioVenta() const;
	float GetPrecioCompra() const;
	

protected:
	int _id, _cantidad;
	float _precioVenta, _precioCompra;
	char _nombre[40], _descripcion[100];
	Fecha _fecha;
	bool _estado;
};

