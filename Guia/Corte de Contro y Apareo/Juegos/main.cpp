#include <iostream>

using namespace std;

/**
 * Ejercicio 12 de guía de Corte de Control y Apareo
 * 
 * ​El dueño de un local de venta de juegos para distintas consolas necesita ​desarrollar un algoritmo
 * que genere un vector, ​JuegosPorConsola, ​ordenado por consola, ​ con un solo registro por consola según el
 * siguiente diseño:
 * a) Consola (cadena)  b) Cantidad de juegos (4 dígitos)
 * 
 * Para obtener la información solicitada se cuenta con el conjunto de datos ​Juegos, ​ordenado por código de
 * juego​ con​ ​un​ ​registro por cada juego​ ​que se encuentra en el local, con el siguiente diseño:
 * 
 * 1) Código del juego (6 digitos)
 * 3) Stock en el local (2 digitos)
 * 2) Titulo del Juego (cadena)
 * 4) Consola (cadena)
 * 
 * Realizar el procedimiento que complete el vector JuegosPorConsola recibiendo el vector de ​Juegos
 * 
*/

struct ST_JUEGOS {
    int codigo;
    int stock;
    string titulo;
    string consola;
};

struct ST_CONSOLA {
    string consola;
    int cantidadDeJuegos;
};

void cargarJuegos(ST_JUEGOS juegos[], int cantidad){

    cout << "Ingrese los datos de los juegos ordenados por su código." << endl;

    for (int i = 0; i < cantidad; i++)
    {
        cout << "Ingrese codigo de juego: ";
        cin >> juegos[i].codigo;
        cout << endl;
        cout << "Ingrese titulo de juego: ";
        cin >> juegos[i].titulo;
        cout << endl;
        cout << "Ingrese stock de juego: ";
        cin >> juegos[i].stock;
        cout << endl;
        cout << "Ingrese consola del juego: ";
        cin >> juegos[i].consola;
        cout << endl;
    }
}

void ordenarPorNombreConsola(ST_JUEGOS juegos[], int cantidad){
    ST_JUEGOS aux;

    for (int i = 0; i < cantidad - 1; i++)
    {
        for (int j = 0; j < cantidad - i - 1; j++)
        {
            if (juegos[j].consola >= juegos[j + 1].consola)
            {
                aux = juegos[j];
                juegos[j] = juegos[j + 1];
                juegos[j + 1] = aux;
            }
        }
    }

    return;
}

void cargarJuegosPorConsola(ST_JUEGOS juegos[], ST_CONSOLA juegosPorConsola[], int cantidad){
    string consola;
    int i = 0;
    int k = 0;
    int cantidadDeJuegos = 0;

    while (i < cantidad){

        consola = juegos[i].consola;
        cantidadDeJuegos = 0;
        while (i < cantidad && consola == juegos[i].consola)
        {
            cantidadDeJuegos++;
            i++;
        }

        juegosPorConsola[k].consola = consola;
        juegosPorConsola[k].cantidadDeJuegos = cantidadDeJuegos;
        k++;
    }
}

int main()
{
    ST_JUEGOS juegos[100];
    ST_CONSOLA juegosPorConsola[100];

    // cargarJuegos(juegos, 100); --> ordenado por código de juego (enuncido)

    // ordenarPorNombreConsola(juegos, 100);

    // cargarJuegosPorConsola(juegos, juegosPorConsola, 100);

    // imprimirJuegosPorConsola(juegosPorConsola, 100);

    return 0;
}