#include <iostream>

using namespace std;

/**
 * Ej. MI-33: Desarrollar una función que calcule el máximo común divisor de dos números enteros A, B 
 * con el siguiente algoritmo:
 * 1) Dividir A por B, y calcular el resto (0 < R < B)
 * 2) Si R = 0, el MCD es B, si no seguir en 3)
 * 3) Reemplazar A por B, B por R, y volver al paso 1)
*/ 

int maximoComunDivisor(int a, int b)
{
    int r = a % b;

    while (r != 0)
    {
        a = b;
        b = r;
        r = a % b;
    }

    return b;
}

int ingresarNumero(string mensaje){
    int num;
    cout << mensaje;
    cin >> num;
    cout << endl;

    return num;
}

int main () {
    int num1 = 0;
    int num2 = 0;

    num1 = ingresarNumero("Ingrese el 1er número: ");
    num2 = ingresarNumero("Ingrese el 2do número: ");

    int mcd = maximoComunDivisor(num1, num2);

    cout << "El MCD entre " << num1 << " y " << num2 << " es: " << mcd << endl;

    return 0;
}