#include <iostream>

using namespace std;

#define CANTIDAD 3
#define CANTIDAD_FLOAT 3.0

void cargarVector(int v1[], int cantidad){
    for (int i = 0; i < cantidad; i++)
    {
        cin >> v1[i];
    }
}

int obtenerSuma(int v1[], int cantidad){
    int suma = 0;
    for (int i = 0; i < cantidad; i++)
    {
        suma = suma + v1[i];
    }
    return suma;
}

void ordenaVector(int v1[], int cantidad){
    int aux;
    for (int i = 0; i < cantidad; i++)
    {
        for (int j = 0; j < cantidad - i - 1; j++)
        {
            if (v1[j] >= v1[j + 1])
            {
                aux = v1[j];
                v1[j] = v1[j + 1];
                v1[j + 1] = aux;
            }
        }
    }
}

void imprimirVector(int v1[], int inicio, int fin){
    if (inicio < fin){
        for (int i = inicio; i < fin; i++)
        {
            cout << v1[i] << endl;
        }
    }
    else{
        for (int i = inicio; i >= fin; i--)
        {
            cout << v1[i] << endl;
        }
    }
    
}

int main () {

    int v1[CANTIDAD];

    cargarVector(v1, CANTIDAD);
    int suma = obtenerSuma(v1, CANTIDAD);
    ordenaVector(v1, CANTIDAD);    

    float promedio = suma / CANTIDAD_FLOAT;
    if( promedio > 5){
        imprimirVector(v1, 0, CANTIDAD);
    }
    else
    {
        imprimirVector(v1, CANTIDAD-1, 0);
    }
    
    return 0;
}
