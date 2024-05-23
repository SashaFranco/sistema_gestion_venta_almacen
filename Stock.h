#pragma once
#include <iostream>
#include "Producto.h"
#include "Fecha.h"
using namespace std;

class Stock
{
public:

    Stock();
    Stock(int idProducto, int cantidad, Fecha fechaIngreso, bool estado);

    void CargarStock();
    void MostrarStock();

    void SetIdProducto(int idProducto);
    void SetCantidad(int cantidad);
    void SetFechaIngreso(Fecha fechaIngreso);
    void SetEstado(bool estado);

    int GetIdProducto() const;
    int GetCantidad() const;
    Fecha GetFechaIngreso() const;
    bool GetEstado() const;

private:

    int _cantidad, _idProducto;
    Producto _producto;
    Fecha _fechaIngreso;
    bool _estado;
};

