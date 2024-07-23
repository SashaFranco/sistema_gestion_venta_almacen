#pragma once
#include <iostream>
#include <cstring>
#include <iomanip>
#include <vector>

using namespace std;

#include "Cliente.h"
#include "ArchivosClientes.h"

class Factura
{
public:
    Factura();

    void setFormaDePago(const char* fp);
    void setEnvio(bool e);
    void setIdCliente(int id);
    void setEstado(bool estado);
    void setMonto(float monto);
    void setFechaActual();
    void setId(int id);

    char* getFormaDePago();
    bool getEnvio();
    int getIdCliente();
    Fecha getFecha();
    float getMonto();
    int getId();
    bool getEstado();

    void MostrarEncabezado();
    void Cargar(int idCliente, float monto);
    void Mostrar();
    //Cliente BuscarIDCliente(int num);


private:

    int _idcliente, _id; // no se si usar. fijarse si sirve _cliente.GetId()
    char _formaDePago[10];
    bool _envio, _estado;
    float _monto;
    Cliente _cliente; // fijarse si se puede borrar, ya que la funcion no lo necesita
    Fecha _fecha;
};

