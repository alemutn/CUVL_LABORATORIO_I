#include <iostream>
#include "funciones.h"

using namespace std;

/**
 * Cada acta de nacimiento posee los siguientes datos:
    Fecha de nacimiento (día, mes, año con el formato dd/mm/yyyy)
    Género: M | F | 0
    Nombre y Apellido
    DNI
*/


struct ST_ACTA_2
{
    int dni;
    string nombre;
    char genero;
    int fecha; //AAAAMMDD
};


struct ST_ACTA_DIFICIL
{
    int dni;
    string nombre;
    char genero;
    int dia;
    int mes;
    int anio;
};




void imprimirFechaFormateada(ST_FECHA fechaNacimiento){
    cout << fechaNacimiento.dia << "/" << fechaNacimiento.mes << "/" << fechaNacimiento.anio << endl;
}

void cargarActaNacimiento(ST_ACTA actas[], int cantidad){
    int dni, dia, mes, anio;

    for (int i = 0; i < cantidad; i++)
    {
        ingresarDatoEntero("Ingrese DNI: ", actas[i].dni);
        // cargar el resto de los datos;
        actas[i].fechaNacimiento = cargarFecha();
    }

}

void ordenarPorFecha(ST_ACTA actas[], int cantidad)
{
    for (int i = 0; i < cantidad - 1; i++)
    {
        for (int j = 0; j < cantidad - i - 1; j++)
        {
            if (actas[j].fechaNacimiento.fecha <= actas[j + 1].fechaNacimiento.fecha)
            {
                // intercambiarPosiciones(actas, j);
            }
        }
    }

    return;
}

int main () {
    ST_ACTA actas[CANTIDAD_HABITANTES];
    cargarActaNacimiento(actas, CANTIDAD_HABITANTES);
    return 0;
}