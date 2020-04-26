#include <iostream>

using namespace std;

/*
Escribir una función lógica que dado un caracter determine
si el mismo es un dígito entre 0 y 9.

'A' --> false
'3' --> true
*/

bool esDigito (char caracter) {

    if (caracter == '0' || caracter == '1' || caracter == '2' ||
        caracter == '3' || caracter == '4' || caracter == '5' ||
        caracter == '6' || caracter == '7' || caracter == '8' ||
        caracter == '9') {

        return true;
    }
    else {
        return false;
    }

}

int main()
{
    char caracter;

    cout << "Ingrese caracter:" << endl;
    cin >> caracter;

    bool resultado = esDigito(caracter);

    if (resultado == true) {
        cout << "Es un dígito" << endl;
    }
    else {
        cout << "No es un dígito" << endl;
    }
    return 0;
}
