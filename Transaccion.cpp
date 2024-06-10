#include "Transaccion.h"

Transaccion::Transaccion()
{
    _idTransaccion = -1;
    _tipo = 0;
    _monto = 0;
    _idProducto = -1;
}

Transaccion::Transaccion(int idTransaccion, int tipo, double monto, int idProducto) {
    _idTransaccion = idTransaccion;
    _tipo = tipo;
    _monto = monto;
    _idProducto = idProducto;
    setFecha();
}

// Getters
int Transaccion::getIdTransaccion() const { return _idTransaccion; }
int Transaccion::getTipo() const { return _tipo; }
Fecha Transaccion::getFecha() const { return _fecha; }
double Transaccion::getMonto() const { return _monto; }
int Transaccion::getIdProducto() const { return _idProducto; }

// Setters
void Transaccion::setIdTransaccion(int idTransaccion) { _idTransaccion = idTransaccion; }
void Transaccion::setTipo(int tipo) { _tipo = tipo; }
void Transaccion::setFecha() { _fecha.FechaActual(); }
void Transaccion::setMonto(double monto) { _monto = monto; }
void Transaccion::setIdProducto(int idProducto) {_idProducto = idProducto; }

void Transaccion::mostrarTransaccion() const {
    cout << setw(15) << getIdTransaccion();
    cout << setw(20) << (getTipo() == 1 ? "Compra" : "Venta");
    cout << setw(20) << getFecha().toString();
    cout << setw(35) << getMonto();
    cout << setw(35) << getIdProducto() << endl;
}
void Transaccion::mostrarEncabezadoTransaccion() const
{
    cout << setw(15) << "ID Transaccion: ";
    cout << setw(20) << "Tipo: ";
    cout << setw(20) << "Fecha: ";
    cout << setw(35) << "Monto: ";
    cout << setw(35) << "ID Producto: " << endl;
    cout << "-------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;

}
void Transaccion::cargarCompra()
{
    int monto, idProducto;
    setTipo(1);

    cout << "Ingrese el monto de la compra: ";
    cin >> monto;
    setMonto(monto);

    cout << "Ingrese el ID del Producto: ";
    cin >> idProducto;
    setIdProducto(idProducto);

    setFecha();
}


void Transaccion::cargarVenta()
{
    int monto, idProducto;
    setTipo(2);

    cout << "Ingrese el monto de la venta: ";
    cin >> monto;
    setMonto(monto);

    cout << "Ingrese el ID del Producto: ";
    cin >> idProducto;
    setIdProducto(idProducto);

    setFecha();
}



