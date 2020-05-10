#include <iostream>
#include "funciones.h"

using namespace std;

/**
 * Ej. MI-36: Dada la fracción P/Q, para P y Q naturales informar la mayor cantidad de simplificaciones. Desarrolle y
 * utilice una función que reciba dos números naturales y retorne el menor factor común. Ej: 360/60 = 180/30 = 90/15 =
 * 30/5 = 6/1
*/

int main () {
    int num1 = 360;
    int num2 = 60;

    int cantidadSimplificaciones = 0;
    int menorFactorComun = 1;

    simplificar(num1, num2, cantidadSimplificaciones, menorFactorComun);

    cout << "La cantidad de simplificaciones realizadas es: " << cantidadSimplificaciones << endl;
    cout << "El mínimo factor comun es. " << menorFactorComun << endl;

    return 0;
}
