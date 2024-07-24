#include "Factura.h"

Factura::Factura()
{
	_id = -1;
	_idcliente = -1;
	strcpy_s(_formaDePago, "");
	_envio = false;
	_estado = false;
	_fecha = Fecha(0, 0, 0);
	_monto = 0;
}

void Factura::setFormaDePago(const char* fp) { strcpy_s(_formaDePago, fp); }
void Factura::setIdCliente(int id) { _idcliente = id; }
void Factura::setEstado(bool estado) { _estado = estado; }
void Factura::setMonto(float monto) { _monto = monto; }
void Factura::setEnvio(bool e) { _envio = e; }
void Factura::setFechaActual() { _fecha.FechaActual(); }

void Factura::setId(int id) { _id = id; }

char* Factura::getFormaDePago() { return _formaDePago; }
bool Factura::getEnvio() { return _envio; }
int Factura::getIdCliente() { return _idcliente; }
Fecha Factura::getFecha() { return _fecha; }
float Factura::getMonto() { return _monto; }
int Factura::getId() { return _id; }
bool Factura::getEstado() { return _estado; }

void Factura::MostrarEncabezado()
{
	cout << setw(5) << "ID DE VENTA";
	cout << setw(5) << "ID DE CLIENTE";
	cout << setw(15) << "FORMA DE PAGO";
	cout << setw(10) << "ENVIO";
	cout << setw(15) << "MONTO";
	cout << setw(15) << "FECHA" << endl;
	cout << "---------------------------------------------------------------------------------" << endl;
}
void Factura::Cargar(int idCliente, float monto)
{
	char formaDePago[10];
	bool envio;
	system("cls");

	cin.ignore();
	cout << "FORMA DE PAGO: ";
	cin.getline(formaDePago, sizeof(formaDePago));
	cout << endl;
	cout << "1-ENVIOS /// 0-RETIRO EN TIENDA : ";
	cin >> envio;

	setFormaDePago(formaDePago);
	setEnvio(envio);
	setIdCliente(idCliente);
	setMonto(monto);
	setFechaActual();
	setEstado(true);
}
void Factura::Mostrar()
{
	char envio[25];

	if (getEstado() == true)
	{
		if (getEnvio() == true)
		{
			strcpy_s(envio, "ENVIO A DOMICILIO");
		}
		else
		{
			strcpy_s(envio, "RETIRO EN TIENDA");
		}

		cout << setw(5) << getId();
		cout << setw(5) << getIdCliente();
		cout << setw(15) << getFormaDePago();
		cout << setw(10) << envio;
		cout << setw(15) << getMonto();
		cout << setw(15) << _fecha.toString() << endl;
		cout << "---------------------------------------------------------------------------------" << endl;

	}
}






