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
private:
    int idTransaccion;
    int tipo; // 1 para compra, 2 para venta
    Fecha fecha;
    double monto;
    int idProducto;
    int idUsuario;

public:
    Transaccion(int idTransaccion, int tipo, double monto, int idProducto, int idUsuario);

    // Getters
    int getIdTransaccion() const;
    int getTipo() const;
    Fecha getFecha() const;
    double getMonto() const;
    int getIdProducto() const;
    int getIdUsuario() const;

    // Setters
    void setIdTransaccion(int idTransaccion);
    void setTipo(int tipo);
    void setFecha();
    void setMonto(double monto);
    void setIdProducto(int idProducto);
    void setIdUsuario(int idUsuario);

    void mostrarTransaccion() const;
};



