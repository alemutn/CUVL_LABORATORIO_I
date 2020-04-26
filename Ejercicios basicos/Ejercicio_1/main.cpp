#include <iostream>

using namespace std;

/*
Escribir una función que dado un número entero devuelva
el caracter P si el número es positivo o N si el número es negativo.
*/

char esPositivoONegativo(int numero) {

    char resultado;

    if (numero >= 0) {
        resultado = 'P';
    }
    else {
        resultado = 'N';
    }

    return resultado;
}


int main() {
    int numero;
    cout << "ingrese un número" << endl;
    cin >> numero;

    // forma 1
    char positivoONegativo = esPositivoONegativo(numero);
    cout << "El número es: " << positivoONegativo << endl;

    // forma 2
    cout << "El número es: " << esPositivoONegativo(numero) << endl;

    return 0;
}
