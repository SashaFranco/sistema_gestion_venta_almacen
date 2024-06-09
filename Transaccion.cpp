#include "Transaccion.h"
#include "Manager.h"


Transaccion::Transaccion() {//defino el constructor predeterminadoo
    idTransaccion = 0;
    tipo = 0;
    monto = 0;
    idProducto = -1;
    setFecha();
}

Transaccion::Transaccion(int _idTransaccion, int _tipo, double _monto, int _idProducto) {
    idTransaccion = _idTransaccion;
    tipo = _tipo;
    monto = _monto;
    idProducto = _idProducto;
    setFecha();
}


// Getters
int Transaccion::getIdTransaccion() const { return idTransaccion; }
int Transaccion::getTipo() const { return tipo; }
Fecha Transaccion::getFecha() const { return fecha; }
double Transaccion::getMonto() const { return monto; }
int Transaccion::getIdProducto() const { return idProducto; }

// Setters
void Transaccion::setIdTransaccion(int _idTransaccion) { idTransaccion = _idTransaccion; }
void Transaccion::setTipo(int _tipo) { tipo = _tipo; }
void Transaccion::setFecha() { fecha.FechaActual(); }
void Transaccion::setMonto(double _monto) { monto = _monto; }
void Transaccion::setIdProducto(int _idProducto) {idProducto = _idProducto; }


void Transaccion::mostrarTransaccion() const {
    
    setConsoleSize(25, 170);
    cout << "---------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << left;
    cout << setw(15) << getIdTransaccion()+1;// << endl;
    cout << setw(20) << getFecha().toString();
    cout << setw(20) << (getTipo() == 1 ? "Compra" : "Venta");// << endl;
    cout << setw(35) << getIdProducto();
    cout << setw(35) << getMonto() << endl;
    cout << endl;
    
}

void Transaccion::mostrarEncabezadoTransaccion() const
{
    system("cls");
    cout << left;
    cout << setw(15) << "ID Transaccion: ";
    cout << setw(20) << "Fecha: ";
    cout << setw(20) << "Tipo: ";
    cout << setw(35) << "ID Producto: ";
    cout << setw(35) << "Monto: " << endl;
}




