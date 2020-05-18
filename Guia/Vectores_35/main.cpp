#include <iostream>

using namespace std;

bool esPalindromo(const char palabra[], int longitud){
    bool palindromo = true;
    int i = 0;
    int final = longitud - 1;

    while (i < (longitud / 2) && palindromo)
    {
        if(palabra[i] != palabra[final-i]){
            palindromo = false;
        }
        i++;
    }

    return palindromo;
}

int main () {

    // char pal[] = {'n', 'e', 'u', 'q', 'u', 'e', 'n'};

    int dimension;
    cout << "Ingrese cantidad de letras: ";
    cin >> dimension;
    cout << endl;

    char palabra[dimension] = {'\0'};

    for (int i = 0; i < dimension; i++)
    {
        cout << "Ingrese la letra " << i + 1 << ": ";
        cin >> palabra[i];
        cout << endl;
    }

    if (esPalindromo(palabra, dimension))
    {
        cout << "Es palíndromo" << endl;
    }
    else
    {
        cout << "No es palíndromo" << endl;
    }

    return 0;
}