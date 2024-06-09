#include "Transaccion.h"

Transaccion::Transaccion(int idTransaccion, int tipo, double monto, int idProducto) {
    idTransaccion = -1;
    tipo = 0;
    monto = 0;
    idProducto = -1;
    setFecha();
}

// Getters
int Transaccion::getIdTransaccion() const { return idTransaccion; }
int Transaccion::getTipo() const { return tipo; }
Fecha Transaccion::getFecha() const { return fecha; }
double Transaccion::getMonto() const { return monto; }
int Transaccion::getIdProducto() const { return idProducto; }

// Setters
void Transaccion::setIdTransaccion(int idTransaccion) { idTransaccion = idTransaccion; }
void Transaccion::setTipo(int tipo) { tipo = tipo; }
void Transaccion::setFecha() { fecha.FechaActual(); }
void Transaccion::setMonto(double monto) { monto = monto; }
void Transaccion::setIdProducto(int idProducto) {idProducto = idProducto; }

void Transaccion::mostrarTransaccion() const {
    cout << setw(15) << getIdTransaccion() << endl;
    cout << setw(20) << (getTipo() == 1 ? "Compra" : "Venta") << endl;
    cout << setw(20) << getFecha().toString();
    cout << setw(35) << getMonto() << endl;
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
    setTipo(2);

    cout << "Ingrese el monto de la transaccion: ";
    cin >> monto;
    setMonto(monto);

    cout << "Ingrese el ID del Producto: ";
    cin >> idProducto;
    setIdProducto(idProducto);

    setFecha();
}

void Transaccion::cargarVenta()
{
    setTipo(1);

    cout << "Ingrese el monto de la transaccion: ";
    cin >> monto;
    setMonto(monto);

    cout << "Ingrese el ID del Producto: ";
    cin >> idProducto;
    setIdProducto(idProducto);

    setFecha();
}



