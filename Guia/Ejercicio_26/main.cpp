#include <iostream>

using namespace std;

int main () {
    const int cantidaContenedores = 3;
    
    int codigoContenedor;
    int pesoContenedor;
    int puerto;
    int pesoTotal = 0;
    int puerto1 = 0;
    int puerto2 = 0;
    int puerto3 = 0;
    int pesoMayor = 0;
    int codigoContenedorMayorPeso = 0;

    for (int i = 1; i <= cantidaContenedores; i++)
    {
        cout << "Ingresar codigo del contenedor" << endl;
        cin >> codigoContenedor;

        cout << "Ingresar peso del contenedor" << endl;
        cin >> pesoContenedor;

        cout << "Ingresar número de puerto" << endl;
        cin >> puerto;

        pesoTotal = pesoTotal + pesoContenedor;

        if (pesoContenedor > pesoMayor) {
            pesoMayor = pesoContenedor;
            codigoContenedorMayorPeso = codigoContenedor;
        }

        switch (puerto)
        { 
            case 1:
                puerto1 = puerto1 + 1;
                break;
            case 2:
                puerto2 = puerto2 + 1;
                break;
            case 3:
                puerto3 = puerto3 + 1;
                break;
        }
    }

    cout << "Peso total que el buque debe trasladar: " << pesoTotal << endl;

    cout << "Código del contenedor de mayor peso: " << codigoContenedorMayorPeso << endl;

    cout << "Cantidad de contenedores que debe trasladar al puerto 1: " << puerto1 << endl;
    cout << "Cantidad de contenedores que debe trasladar al puerto 2: " << puerto2 << endl;
    cout << "Cantidad de contenedores que debe trasladar al puerto 3: " << puerto3 << endl;
}