#include <iostream>

using namespace std;

#define CANT_JUEGOS 100
#define CANT_USUARIOS 1000

#define CANT_JUGADAS 100 // no está en el enunciado. Cada uno lo definía arbitrariamente.

struct ST_JUEGO {
    int codigo;
    string nombre;
};

struct ST_USUARIO {
    int codigo; 
    string nombre;
    int fechaRegistro;
};

struct ST_JUGADA {
    int codigoJuego;
    int codigoUsuario;
};

void ordenarJuegos(ST_JUEGO juegos[CANT_JUEGOS]){
    ST_JUEGO aux;

    for (int i = 0; i < CANT_JUEGOS - 1; i++)
    {
        for (int j = 0; j < CANT_JUEGOS - i - 1; j++)
        {
            if (juegos[j].codigo >= juegos[j+1].codigo){
                aux = juegos[j];
                juegos[j] = juegos[j+1];
                juegos[j+1] = aux;
            }
        }
    }

    return;
}

int busquedaBinariaUsuario(ST_USUARIO usuarios[CANT_USUARIOS], int buscado){
    int inferior = 0;
    int superior = CANT_USUARIOS-1;
    int medio = -1;
    int pos = -1;

    while (inferior < superior)
    {
        medio = (inferior + superior) / 2;
        if (usuarios[medio].codigo == buscado){
            pos = medio;
        }

        if (usuarios[medio].codigo < buscado){
            inferior = medio + 1;
        }
        else {
            superior = medio - 1;
        }
    }

    return pos;
}

string obtenerNombreJuego(int codigoJuego, ST_JUEGO juegos[]){
    int pos = codigoJuego - 100;
    return juegos[pos].nombre;
}

void imprimirListado(ST_JUGADA jugadas[CANT_JUGADAS], ST_JUEGO juegos[CANT_JUEGOS], ST_USUARIO usuaios[CANT_USUARIOS]){

    int i = 0;
    int codigoJuego = 0;
    int pos = 0;
    int cantUsuariosDelJuego = 0;
    while (i < CANT_JUGADAS)
    {
        cantUsuariosDelJuego = 0;
        codigoJuego = jugadas[i].codigoJuego;
       
        string nombreJuego = obtenerNombreJuego(codigoJuego, juegos);
        cout << "Juego: " << nombreJuego << endl;
        // cout << "Juego: " << juegos[codigoJuego - 100].nombre << endl;

        while (i < CANT_JUGADAS && codigoJuego == jugadas[i].codigoJuego)
        {
            // El enunciado no asegura que el vector de usuarios sea PUP, por eso hago búsqueda binaria
            pos = busquedaBinariaUsuario(usuaios, jugadas[i].codigoUsuario);
            if(pos > -1){
                cout << usuaios[pos].nombre << " - " << usuaios[pos].fechaRegistro;
                cantUsuariosDelJuego++;
            }
            
            i++;
        }

        cout << "--------" << endl;
        cout << "Cantidad total de usuario del juego: " << cantUsuariosDelJuego << endl;
    }
    
}

int main () {
    ST_JUEGO juegos[CANT_JUEGOS];
    ST_USUARIO usuarios[CANT_USUARIOS];
    ST_JUGADA jugadas[CANT_JUGADAS];

    ordenarJuegos(juegos);
    imprimirListado(jugadas, juegos, usuarios);

    return 0;
}