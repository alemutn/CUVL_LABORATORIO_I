#include <iostream>
#include <math.h>

using namespace std;

/**
 * Ej. MI-29: Dado un número entero positivo entre 1 y 3999 informar su correspondiente número Romano 
 * 
 *  1000 --> M
 *  2000 --> MM
 * 
 *  1 2 0 0 -->  M C C D D U U
 *  
 *  1 --> I
*/

int main () {
    int numero = 0;

    int unidad = 0;
    int decena = 0;
    int centena = 0;
    int unidadDeMil = 0;

    cout << "Ingrese un numero entre 1 y 3999" << endl;
    cin >> numero;

    unidad = numero % 10;
    decena = (numero % 100) / 10;
    centena = (numero % 1000) / 100;
    unidadDeMil = (numero % 10000) / 1000;

    string romano = "";

    for (int i = 0; i < unidadDeMil; i++){
        romano += "M";
    }

    switch (centena)
    {
        case 1:
        case 2:
        case 3:
            for (int i = 0; i < centena; i++)
            {
                romano += 'C';
            }
            break;
        case 4:
            romano += "CD";
            break;
        case 5:
            romano += "D";
            break;
        case 6:
        case 7:
        case 8:
            romano += "D";
            for (int i = 0; i < centena - 5; i++)
            {
                romano += "C";
            }
            break;
        case 9:
            romano += "CM";
        default:
            break;
    }

    switch (decena)
    {
        case 1:
        case 2:
        case 3:
            for (int i = 0; i < decena; i++)
            {
                romano += "X";
            }
            break;
        case 4:
            romano += "XL";
            break;
        case 5:
            romano += "L";
            break;
        case 6:
        case 7:
        case 8:
            romano += "L";
            for (int i = 0; i < decena - 5; i++)
            {
                romano += "X";
            }
            break;
        case 9:
            romano += "XC";
        default:
            break;
    }

    switch (unidad)
    {
        case 1:
        case 2:
        case 3:
            for (int i = 0; i < unidad; i++)
            {
                romano += "I";
            }
            break;
        case 4:
            romano += "IV";
            break;
        case 5:
            romano += "V";
            break;
        case 6:
        case 7:
        case 8:
            romano += "V";
            for (int i = 0; i < unidad - 5; i++)
            {
                romano += "I";
            }
            break;
        case 9:
            romano += "IX";
        default:
            break;
    }

    cout << "Romano: " << romano << endl;
    return 0;
}