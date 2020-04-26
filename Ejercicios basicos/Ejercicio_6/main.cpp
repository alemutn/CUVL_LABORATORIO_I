#include <iostream>

using namespace std;

/* 7) Escribir un programa que permita obtener los primeros N números primos.*/

bool esNumeroPrimo(int numero){

    for (int i = 2; i < numero; i++){
        if (numero % i == 0){
            return false;
        }
    }

    return true;
}

int main () {

    int cantidad = 0;

    cout << "Ingrese la cantidad de Nros. Primos a conocer: ";
    cin >> cantidad;
    cout << endl;

    // N = 6; 1, 2, 3, (4), 5, (6), 7, (8), (9), (10), 11

    int i = 0;
    int numero = 1;
    while (i < cantidad)
    {
        // La variable i se incrementa cuando encuentro un número primo
        if(esNumeroPrimo(numero) == true){
            i = i + 1;
            cout << "Número primo: " << numero << endl;
        }

        numero = numero + 1;
    }

    return 0;
}