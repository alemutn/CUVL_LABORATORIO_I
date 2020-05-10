#include <iostream>

using namespace std;

/**
 * Ej. MI-22: Dado un conjunto de Nombres y Fechas de nacimientos (AAAAMMDD), 
 * que finaliza con un Nombre = ‘FIN’, informar el nombre de la persona con mayor edad y el de la más joven. 
 * 
 */

int main()
{
    string nombre = "";
    int fechaNacimiento = 0;

    int fechaNacimientoMayor = 0;
    string nombreMayor = "";

    int fechaNacimientoMenor = 0;
    string nombreMenor = "";

    cout << "Ingrese un nombre: " << endl;
    cin >> nombre;

    while (nombre != "FIN") {
        cout << "Ingrese fecha de nacimiento (AAAAMMDD)" << endl;
        cin >> fechaNacimiento;

        if ((fechaNacimiento - fechaNacimientoMayor) < 0 || fechaNacimientoMayor == 0) {
            fechaNacimientoMayor = fechaNacimiento;
            nombreMayor = nombre;
        }

        if ((fechaNacimiento - fechaNacimientoMenor) > 0 || fechaNacimientoMenor == 0) {
            fechaNacimientoMenor = fechaNacimiento;
            nombreMenor = nombre;
        }

        cout << "Ingrese un nombre: " << endl;
        cin >> nombre;
    }

    cout << "La persona de más edad es: " << nombreMayor << endl;
    cout << "La persona de menor edad es: " << nombreMenor << endl;

    return 0;
}
