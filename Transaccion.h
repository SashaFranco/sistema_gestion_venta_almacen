#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include "Fecha.h"

using namespace std;

// ESTA CLASE MANEJA LAS TRANSACCIONES DE ENTRADA Y SALIDA DE DINERO Y PRODUCTOS
// COMPRA ES ENTRADA DE DINERO Y SALIDA ES GASTO DE PLATA
// ES DECIR COMPRA INGRESA STOCK Y SALE PLATA Y SALIDA ENTRA PLATA Y SALE STOCK


class Transaccion {

public:

    Transaccion();
    Transaccion(int idTransaccion, int tipo, double monto, int idProducto);

    // Getters
    int getIdTransaccion() const;
    int getTipo() const;
    Fecha getFecha() const;
    double getMonto() const;
    int getIdProducto() const;

    // Setters
    void setIdTransaccion(int idTransaccion);
    void setTipo(int tipo);
    void setFecha();
    void setMonto(double monto);
    void setIdProducto(int idProducto);

    void mostrarTransaccion() const;
    void mostrarEncabezadoTransaccion() const;
    void cargarCompra();
    void cargarVenta();

private:

    int _idTransaccion;
    int _tipo; // 1 para compra, 2 para venta
    Fecha _fecha;
    double _monto;
    int _idProducto;
};



