#include <iostream>

using namespace std;

/**
Ej. MI-24: Se dispone de un lote de valores enteros positivos que finaliza con un número negativo. 

El lote está dividido en sublotes por medio de valores cero. Desarrollar un programa que determine e informe: 

a) por cada sublote el promedio de valores 

b) el total de sublotes procesados 

c) el valor máximo del conjunto, indicando en que sublote se encontró y la posición relativa del mismo dentro del sublote 

d) valor mínimo de cada sublote 

Nota: el lote puede estar vacío (primer valor negativo), o puede haber uno, varios o todos los sublotes vacíos (ceros consecutivos) 
*/

int main () {

    int numero = 0;
    int cantidadDeSublotes = 0;

    int sumaNumerosSublote = 0;
    int cantidadNumerosSublote = 0;

    int posicionDentroDelSublote = 0;
    int maximoDelConjunto = 0;
    int subloteDelNroMaximo = 0;
    int posicion = 0;

    int minimoDelSublote = 0;

    cout << "Ingrese un numero" << endl;
    cin >> numero;

    while (numero >= 0) {

        // Proceso 1 sublote
        while (numero != 0) {
            sumaNumerosSublote = sumaNumerosSublote + numero;
            cantidadNumerosSublote++;

            if (numero > maximoDelConjunto) {
                maximoDelConjunto = numero;
                subloteDelNroMaximo = cantidadDeSublotes;
                posicionDentroDelSublote = posicion;
            }

            if (numero < minimoDelSublote || minimoDelSublote == 0) {
                minimoDelSublote = numero;
            }

            cout << "Ingrese un numero" << endl;
            cin >> numero;
            posicion++;
        }

        // Calculos y limpieza de variables al finalizar 1 sublote
        if (cantidadNumerosSublote != 0) {
            cout << "#### Punto A ####" << endl;
            cout << "El promedio del sublote es: " << sumaNumerosSublote / cantidadNumerosSublote << endl;
            cout << "" << endl;

            cout << "#### Punto D ####" << endl;
            cout << "El mínimo del sublote es: " << minimoDelSublote << endl;
            cout << "" << endl;

            cantidadDeSublotes++;
            sumaNumerosSublote = 0;
            cantidadNumerosSublote = 0;
            minimoDelSublote = 0;
            posicion = 0;
        }

        cout << "Ingrese un numero" << endl;
        cin >> numero;
    }

    cout << "#### Punto B ####" << endl;
    cout << "Cantidad de sublotes: " << cantidadDeSublotes << endl;
    cout << "" << endl;

    if (cantidadDeSublotes > 0) {
        cout << "#### Punto C ####" << endl;
        cout << "Maximo del conjunto: " << maximoDelConjunto << endl;
        cout << "Sublote del máximo: " << subloteDelNroMaximo + 1 << endl;
        cout << "Posición relativa del máximo: " << posicionDentroDelSublote + 1 << endl;
        cout << "" << endl;
    }

    return 0;
}