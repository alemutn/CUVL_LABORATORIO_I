#include <iostream>

using namespace std;

/* 
    20. Ingresar por plano, fila y columna todos los elementos de una matriz MATRIDIM de M planos, filas y
    columnas. Desarrollar un programa que:
    a) Imprima la matriz MATRIDIM por columnas, fila, plano.
    b) Calcule e imprima el valor promedio de la matriz.
    c) Determine e imprima el mayor valor y en que lugar del la matriz se encuentra.
    d) Genere e imprima una matriz MATCSUMCOL donde cada elemento sea la suma de la columna homóloga.
    e) Genere e imprima una matriz MATMAXFIL donde cada elemento sea el valor máximo de cada fila.
*/


int main () {
    int dimension = 0;
    cout << "Ingrese la dimensión de la matriz: ";
    cin >> dimension;
    cout << endl;

    int mat[dimension][dimension];

    for (int i = 0; i < dimension; i++)
    {
        for (int j = 0; j < dimension; j++)
        {
            cout << "Ingrese el valor para la posición (" << i << ", " << j << "): ";
            cin >> mat[i][j];
            cout << endl;
        }
    }

    float promedio = 0.0;
    int sumaParcial = 0;
    for (int i = 0; i < dimension; i++)
    {
        for (int j = 0; j < dimension; j++)
        {
            sumaParcial += mat[i][j];
        }
    }
    
    promedio = float(sumaParcial) / (dimension*dimension);
    cout << "El promedio de los elementos de la matriz es: " << promedio << endl;

    int filaMayor = -1;
    int colMayor = -1;
    int mayor = 0;
    for (int i = 0; i < dimension; i++)
    {
        for (int j = 0; j < dimension; j++)
        {
            if(mat[i][j] > mayor || filaMayor < 0){
                filaMayor = i;
                colMayor = j;
                mayor = mat[i][j];
            }
        }
    }

    cout << "El elemento mayor de la matriz es: " << mayor << " y se encuentra en la posición: (" << filaMayor << ", " << colMayor << ")" << endl;

    int matSumCol[1][dimension];
    for (int i = 0; i < dimension; i++)
    {
        matSumCol[0][i] = 0;
    }

    for (int i = 0; i < dimension; i++)
    {
        for (int j = 0; j < dimension; j++)
        {
            matSumCol[0][i] += mat[j][i];
        }
    }

    cout << "La suma de las columnas es: " << endl;
    for (int i = 0; i < dimension; i++)
    {
        cout << "Columna " << i << ": " << matSumCol[0][i] << endl;
    }

    int matMaxFila[1][dimension] = {{0}};
    int mayorDeFila = mat[0][0];

    for (int i = 0; i < dimension; i++)
    {
        for (int j = 0; j < dimension; j++)
        {
            if(mat[i][j] > mayorDeFila){
                mayorDeFila = mat[i][j];
            }
        }
        matMaxFila[0][i] = mayorDeFila;
    }

    cout << "El mayor valor de cada fila es: " << endl;
    for (int i = 0; i < dimension; i++)
    {
        cout << "Fila " << i << ": " << matMaxFila[0][i] << endl;
    }

    return 0;
}