#include <iostream>

using namespace std;

// Escribir una función lógica que dado un caracter determine si el mismo es una vocal.

bool esVocal(char letra){

    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
        return true;
    }

    return false;
}

int main () {
    char letra;
    cout << "Ingrese una letra: ";
    cin >> letra;
    cout << endl;

    if (esVocal(letra) == true){
        cout << "La letra ingresada es una vocal" << endl;
    }
    else {
        cout << "La letra ingresada no es una vocal" << endl;
    }

    return 0;
}