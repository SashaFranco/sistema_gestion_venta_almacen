#include "Transaccion.h"

Transaccion::Transaccion(int idTransaccion, int tipo, double monto, int idProducto, int idUsuario)
    : idTransaccion(idTransaccion), tipo(tipo), monto(monto), idProducto(idProducto), idUsuario(idUsuario) {
    setFecha();
}

// Getters
int Transaccion::getIdTransaccion() const { return idTransaccion; }
int Transaccion::getTipo() const { return tipo; }
Fecha Transaccion::getFecha() const { return fecha; }
double Transaccion::getMonto() const { return monto; }
int Transaccion::getIdProducto() const { return idProducto; }
int Transaccion::getIdUsuario() const { return idUsuario; }

// Setters
void Transaccion::setIdTransaccion(int idTransaccion) { idTransaccion = idTransaccion; }
void Transaccion::setTipo(int tipo) { tipo = tipo; }
void Transaccion::setFecha() { fecha.FechaActual(); }
void Transaccion::setMonto(double monto) { monto = monto; }
void Transaccion::setIdProducto(int idProducto) {idProducto = idProducto; }
void Transaccion::setIdUsuario(int idUsuario) { idUsuario = idUsuario; }

void Transaccion::mostrarTransaccion() const {
    cout << "ID Transaccion: " << idTransaccion << endl;
    cout << "Tipo: " << (tipo == 1 ? "Compra" : "Venta") << endl;
    cout << "Fecha: " << getFecha().toString();
    cout << "Monto: " << monto << endl;
    cout << "ID Producto: " << idProducto << endl;
    cout << "ID Usuario: " << idUsuario << endl;
}