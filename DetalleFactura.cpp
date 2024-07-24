#include "DetalleFactura.h"

DetalleFactura::DetalleFactura() {
    _idFactura = -1;
    _producto = Producto();
    _montoTotal = 0;
    _cantidad = 0;
    _estado = false;
}

int DetalleFactura::getIdFactura() const {return _idFactura;}
int DetalleFactura::getCantidad() const {return _cantidad;}
float DetalleFactura::getMontoTotal() const{return _montoTotal;}
Producto DetalleFactura::getProducto() const {return _producto;}
bool DetalleFactura::getEstado() const{return _estado;}

void DetalleFactura::setIdFactura(int idFactura){_idFactura = idFactura;}
void DetalleFactura::setCantidad(int cantidad){_cantidad = cantidad;}
void DetalleFactura::setMontoTotal() {_montoTotal = _cantidad * _producto.GetPrecioVenta();}
void DetalleFactura::setProducto(Producto producto){_producto = producto;}
void DetalleFactura::setEstado(bool estado){_estado = estado;}

void DetalleFactura::mostrarDetalle() const {
    cout << "ID Factura: " << _idFactura << endl;
    cout << "ID Producto " << _producto.GetId() << endl;
    cout << "Cantidad: " << _cantidad << endl;
    cout << "Precio Unitario: " << _producto.GetPrecioVenta() << endl;
    cout << "Precio Total: " << _montoTotal << endl << endl;
}
void DetalleFactura::cargarFactura(int idFactura, Producto producto, int cantidad)
{
    setIdFactura(idFactura);
    setProducto(producto);
    setCantidad(cantidad);
    setEstado(true);
    setMontoTotal();
}
