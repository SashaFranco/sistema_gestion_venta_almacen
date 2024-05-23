#include "Stock.h"

Stock::Stock() {
    _idProducto = -1;
    _cantidad = 0;
    _fechaIngreso = Fecha(0, 0, 0);
    _estado = true;
}

Stock::Stock(int idProducto, int cantidad, bool estado)
{
    _idProducto = idProducto;
    _cantidad = cantidad;
    _estado = estado;
}

Stock::Stock(int idProducto, int cantidad, Fecha fechaIngreso, bool estado) {
    _idProducto = idProducto;
    _cantidad = cantidad;
    _fechaIngreso = fechaIngreso;
    _estado = estado;
}

void Stock::CargarStock() {
    int idProducto, cantidad;
    Fecha fechaIngreso;

    std::cout << "ID del Producto: ";
    std::cin >> idProducto;
    std::cout << "Cantidad: ";
    std::cin >> cantidad;
    std::cout << "Fecha de Ingreso (DD MM YYYY): ";
    fechaIngreso.FechaActual();

    SetIdProducto(idProducto);
    SetCantidad(cantidad);
    SetFechaIngreso(fechaIngreso);
    SetEstado(true);
}

void Stock::MostrarStock() {
    if (_estado) {
        std::cout << std::setw(10) << GetIdProducto();
        std::cout << std::setw(10) << GetCantidad();
        std::cout << std::setw(20) << GetFechaIngreso().toString() << std::endl;
    }
}

void Stock::SetIdProducto(int idProducto) {
    _idProducto = idProducto;
}

void Stock::SetCantidad(int cantidad) {
    _cantidad = cantidad;
}

void Stock::SetFechaIngreso(Fecha fechaIngreso) {
    _fechaIngreso = fechaIngreso;
}

void Stock::SetEstado(bool estado) {
    _estado = estado;
}

int Stock::GetIdProducto() const {
    return _idProducto;
}

int Stock::GetCantidad() const {
    return _cantidad;
}

Fecha Stock::GetFechaIngreso() const {
    return _fechaIngreso;
}

bool Stock::GetEstado() const {
    return _estado;
}
