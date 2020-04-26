#include <iostream>

using namespace std;

// Escribir una función que permita obtener el mayor de 2 números.

int obtenerElMayorEntre(int num1, int num2){
    
    if(num1 >= num2){
        return num1;
    }

    return num2;
}

void ingresarNumero(string orden, int &num){
    cout << "Ingrese el " << orden << " numero: ";
    cin >> num;
    cout << endl;
}

int main () {

    int num1;
    int num2;
    int mayor; 

    ingresarNumero("primero", num1);
    ingresarNumero("segundo", num2);

    mayor = obtenerElMayorEntre(num1, num2);
    cout << "El mayor entre " << num1 << " y " << num2 << " es: " << mayor << endl;

    return 0;
}