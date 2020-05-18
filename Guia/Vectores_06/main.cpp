#include <iostream>

using namespace std;

void cargaVector(int numeros[], int cantidad)
{

    for (int i = 0; i < cantidad; i++)
    {
        cout << "Ingrese número para la posición " << i + 1 << ": ";
        cin >> numeros[i];
        cout << endl;
    }
}

int obtenerMaximo(int numeros[], int cantidad) {
    int mayor = numeros[0];
    
    for (int i = 1; i < cantidad; i++)
    {
        if(numeros[i] > mayor) {
            mayor = numeros[i];
        }
    }

    return mayor;
}

void imprimirPosiciones(int mayor, int numeros[], int cantidad)
{
    cout << "Posiciones donde se encontró el número mayor: " << endl;

    for (int i = 0; i < cantidad; i++)
    {
        if(numeros[i] == mayor){
            cout << i + 1 << endl;
        }
    }
}

int main()
{

    int dimension = 0;

    cout << "Ingrese dimension: ";
    cin >> dimension; // 10
    cout << endl;

    int numeros[dimension] = {0};

    cargaVector(numeros, dimension);

    int mayor = obtenerMaximo(numeros, dimension);

    imprimirPosiciones(mayor, numeros, dimension);

    return 0;
}