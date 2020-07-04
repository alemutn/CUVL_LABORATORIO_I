#include <iostream>

using namespace std;

#define CANT_VENTAS 100

struct ST_VENTAS
{
    string vendedor;
    int sucursal;
    int fecha;
    float monto;
};

void generaListado(ST_VENTAS ventas[], int cantidad){

    int i = 0;
    string nombre = "";
    float totalEmpleado = 0;
    int sucursal = 0;
    float totalSucursal = 0;

    // permite recorrer el conjunto completo de elementos
    while (i < cantidad)
    {
        sucursal = ventas[i].sucursal;
        totalSucursal = 0;

        // Procesa cada sucursal
        cout << "Sucursal: " << sucursal << endl;
        while (i < cantidad && sucursal == ventas[i].sucursal)
        {
            totalEmpleado = 0;
            nombre = ventas[i].vendedor;

            // procesa cada vendedor de 1 sucursal
            while (i < cantidad && sucursal == ventas[i].sucursal && nombre == ventas[i].vendedor){
                totalEmpleado = totalEmpleado + ventas[i].monto;
                i++;
            }

            totalSucursal = totalSucursal + totalEmpleado;

            cout << nombre << ": " << totalEmpleado << endl;
        }
        cout << "-----------" << endl;
        cout << "Total sucursal " << sucursal << ": " << totalSucursal << endl;
    }
    
}


int main () {
    ST_VENTAS ventas[CANT_VENTAS];

    generaListado(ventas, CANT_VENTAS);

    return 0;
}