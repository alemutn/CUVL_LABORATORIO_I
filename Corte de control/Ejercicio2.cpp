#include <iostream>

using namespace std;

#define CANT_EMPLEADOS 100

struct ST_EMPLEADO
{
    string nombre;
    int categoria;
};

void generaListado(ST_EMPLEADO empleados[], int cantidad){
    int i = 0;
    int categoria = 0;
    int empleadosCategoria = 0;

    while (i < cantidad)
    {
        empleadosCategoria = 0;
        categoria = empleados[i].categoria;

        cout << "Categoria: " << categoria << endl;
        while (i < cantidad && categoria == empleados[i].categoria)
        {
            cout << empleados[i].nombre << endl;
            empleadosCategoria++;
            i++;
        }
        cout << "----------" << endl;
        cout << "Total de empleados de la categoria: " << empleadosCategoria << endl;
    }

    return;
}

int main () {
    ST_EMPLEADO empleados[CANT_EMPLEADOS];

    generaListado(empleados, CANT_EMPLEADOS);
    return 0;
}