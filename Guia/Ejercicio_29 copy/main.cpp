#include <iostream>
#include <math.h>

using namespace std;

/**
 * Ej. MI-29: Dado un número entero positivo entre 1 y 3999 informar su correspondiente número Romano 
*/

int main () {
    int numero = 0;
    string romano = "";

    cout << "Ingrese un numero entre 1 y 3999" << endl;
    cin >> numero;

    int valor = 0;
    string letraUnidad;
    string letraCentral;
    string letraSiguiente;

    for (int i = 4; i > 0; i--) {
        valor = (numero % (int)pow(10, i)) / (int)pow(10, i - 1);

        switch (i) {
            case 4: // unidad de mil
                letraUnidad = "M";
                letraCentral = "";
                letraSiguiente = "";
                break;
            case 3: // centena
                letraUnidad = "C";
                letraCentral = "D";
                letraSiguiente = "M";
                break;
            case 2: // decena
                letraUnidad = "X";
                letraCentral = "L";
                letraSiguiente = "C";
                break;
            case 1: // unidad
                letraUnidad = "I";
                letraCentral = "V";
                letraSiguiente = "X";
                break;
            default:
                break;
        }
      

        switch (valor)
        {
            case 1:
            case 2:
            case 3:
                for (int i = 0; i < valor; i++)
                {
                    romano += letraUnidad;
                }
                break;
            case 4:
                romano += letraUnidad + letraCentral;
                break;
            case 5:
                romano += letraCentral;
                break;
            case 6:
            case 7:
            case 8:
                romano += letraCentral;
                for (int i = 0; i < valor - 5; i++)
                {
                    romano += letraUnidad;
                }
                break;
            case 9:
                romano += letraUnidad + letraSiguiente;
            default:
                break;
        }
    }

    cout << "Romano: " << romano << endl;
    return 0;
}