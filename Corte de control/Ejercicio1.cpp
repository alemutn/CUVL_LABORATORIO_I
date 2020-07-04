#include <iostream>

using namespace std;

#define CANT_VENTAS 100

struct ST_VENTAS
{
    string vendedor;
    int fecha;
    float monto;
};

void generaListado(ST_VENTAS ventas[], int cantidad){

    int i = 0;
    float totalEmpleado = 0;
    string nombre = "";

    while (i < cantidad){
        
        totalEmpleado = 0;
        nombre = ventas[i].vendedor;
        while (i < cantidad && nombre == ventas[i].vendedor){
            totalEmpleado = totalEmpleado + ventas[i].monto;
            i++;
        }
        cout << nombre << ": " << totalEmpleado << endl;
    }

    return;    
}

int main () {
    ST_VENTAS ventas[CANT_VENTAS];

    generaListado(ventas, CANT_VENTAS);

    return 0;
}