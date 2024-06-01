#include "Transaccion.h"

Transaccion::Transaccion(int idProducto, int cantidad, double precio, TipoTransaccion tipo)
    : _idProducto(idProducto), _cantidad(cantidad), _precio(precio), _tipo(tipo), _estado(true) {
    _total = cantidad * precio;
}

void Transaccion::MostrarTransaccion() const {
    std::string tipoStr = _tipo == COMPRA ? "Compra" : "Venta";
    std::cout << "ID Producto: " << _idProducto
        << " | Cantidad: " << _cantidad
        << " | Precio: " << _precio
        << " | Total: " << _total
        << " | Tipo: " << tipoStr
        << std::endl;
}