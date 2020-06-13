#include <iostream>

using namespace std;

#define CANTIDAD_HABITANTES 600

struct ST_FECHA
{
    int dia;
    int mes;
    int anio;
    int fecha;
};

struct ST_ACTA
{
    int dni;
    string nombre;
    char genero;
    ST_FECHA fechaNacimiento;
};

void ingresarDatoEntero(string mensaje, int &dato);
ST_FECHA cargarFecha();