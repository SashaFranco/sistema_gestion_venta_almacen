#pragma once
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>


// ESTA CLASE MANEJA LAS TRANSACCIONES DE ENTRADA Y SALIDA DE DINERO Y PRODUCTOS
// COMPRA ES ENTRADA DE DINERO Y SALIDA ES GASTO DE PLATA
// ES DECIR COMPRA INGRESA STOCK Y SALE PLATA Y SALIDA ENTRA PLATA Y SALE STOCK
enum TipoTransaccion {
    COMPRA,
    VENTA
};

class Transaccion {
public:
    Transaccion() : _idProducto(-1), _cantidad(0), _precio(0.0), _total(0.0), _tipo(COMPRA), _estado(true) {}
    Transaccion(int idProducto, int cantidad, double precio, TipoTransaccion tipo);

    void MostrarTransaccion() const;

    // Getters
    int GetIdProducto() const { return _idProducto; }
    int GetCantidad() const { return _cantidad; }
    double GetPrecio() const { return _precio; }
    double GetTotal() const { return _total; }
    TipoTransaccion GetTipo() const { return _tipo; }
    bool GetEstado() const { return _estado; }

    // Setters
    void SetEstado(bool estado) { _estado = estado; }

private:
    int _idProducto;
    int _cantidad;
    double _precio;
    double _total;
    TipoTransaccion _tipo;
    bool _estado;
};



