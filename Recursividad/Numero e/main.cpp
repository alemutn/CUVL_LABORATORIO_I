#include <iostream>

using namespace std;

/**
 * La constante matemática "e" puede aproximarse según la siguiente serie numérica: 
 * e = 1 + 1/1! + 1/2! + 1/3! + .... + 1/n!
 * 
 * Desarrollar una función recursiva que permita obtener el valor aproximado
 * del número e según una cantidad de términos determinada por el usuario.
*/

int factorial (int n){
    if (n == 0){
        return 1;
    }

    return n * factorial(n - 1);
}

float numeroE(int termino) {
    if(termino == 0){
        return 1;
    }

    int f = factorial(termino);
    return numeroE(termino - 1) + 1.0 / f;
}

int main () {
    int n;

    cout << "Ingrese la cantidad de términos: ";
    cin >> n;
    cout << endl;
    
    cout << numeroE(n) << endl;
    return 0;
}