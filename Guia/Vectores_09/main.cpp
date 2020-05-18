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

void calcularResultados(int numerosA[], int numerosB[], int numerosC[], int cantidad)
{
    for (int i = 0; i < cantidad; i++)
    {
        numerosC[i] = numerosA[i] + numerosB[cantidad - 1 - i];
    }
}

void imprimirResultados(int numerosA[], int numerosB[], int numerosC[], int cantidad)
{
    cout << "Resultado: " << endl;

    int indiceB = 0;

    for (int i = 0; i < cantidad; i++)
    {
        indiceB = cantidad - 1 - i;
        cout << "A[" << i << "]:" << numerosA[i] << " + B[" << indiceB << "]:" << numerosB[indiceB] << " = " << numerosC[i] << endl;
    }
}

int main()
{

    int dimension = 0;

    cout << "Ingrese dimension: ";
    cin >> dimension; // 10
    cout << endl;

    int numerosA[dimension] = {0};
    int numerosB[dimension] = {0};
    int numerosC[dimension] = {0};

    cout << "Ingrese números para el 1er vector: " << endl;
    cargaVector(numerosA, dimension);

    cout << "Ingrese números para el 2do vector: " << endl;
    cargaVector(numerosB, dimension);

    calcularResultados(numerosA, numerosB, numerosC, dimension);

    imprimirResultados(numerosA, numerosB, numerosC, dimension);

    return 0;
}