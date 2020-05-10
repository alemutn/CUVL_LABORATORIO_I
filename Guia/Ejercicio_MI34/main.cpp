#include <iostream>

using namespace std;

int factorial(int valor) {

    int resultado = 1;

    for (int i = valor; i > 0; i--)
    {
        resultado = resultado * i;
    }

    return resultado;
}

int main () {

    int numero = 0;
    cout << "Ingrese un número: ";
    cin >> numero;
    cout << endl;

    cout << "El factorial de " << numero << " es " << factorial(numero) << endl;
    return 0;
}