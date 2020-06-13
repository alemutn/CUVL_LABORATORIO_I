#include "funciones.h"

void ingresarDatoEntero(string mensaje, int &dato)
{
    cout << mensaje;
    cin >> dato;
    cout << endl;
}

ST_FECHA cargarFecha()
{
    ST_FECHA fechaNacimiento;

    ingresarDatoEntero("Ingrese día: ", fechaNacimiento.dia);
    ingresarDatoEntero("Ingrese mes: ", fechaNacimiento.mes);
    ingresarDatoEntero("Ingrese año: ", fechaNacimiento.anio);

    fechaNacimiento.fecha = fechaNacimiento.anio * 10000 + fechaNacimiento.mes * 100 + fechaNacimiento.dia;

    return fechaNacimiento;
}