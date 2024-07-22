#pragma once
#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

#include "Cliente.h"
#include "ArchivosClientes.h"
#include "Producto.h"

class DetalleFactura
{
public:
    DetalleFactura();
    void  setId(int id);
    void  setIdproducto(int pro);
    void  setCantidad(int cant);
    void  setEstado(bool e);
    void  setTotal(float total);

    int getId();
    int getIdProducto();
    int getCantidad();
    bool getEstado();
    float getTotal();

    void Cargar();
    void Mostrar();
    Producto BuscarIDProducto(int num);

private:
    int _id;
    int _idproducto;
    int _cantidad;
    bool _Estado;
    float _total;
};

