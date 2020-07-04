#include <iostream>

using namespace std;

#define CANT_CANCIONES 100000
#define CANT_ESCUCHADAS 100000

struct ST_CANCION {
    int codigo;
    string nombre;
    string disco;
    int artista;
    int duracion; // MMSS
};

struct ST_ESCUCHADA {
    int fecha;
    int codigoCancion;
};


void ordenarCanciones(ST_CANCION canciones[CANT_CANCIONES]){
    ST_CANCION aux;

    for (int i = 0; i < CANT_CANCIONES - 1; i++)
    {
        for (int j = 0; j < CANT_CANCIONES - i - 1; j++)
        {
            if (canciones[j].codigo >= canciones[j+1].codigo){
                aux = canciones[j];
                canciones[j] = canciones[j+1];
                canciones[j+1] = aux;
            }
        }
    }

    return;
}

int obtenerAnio(int fecha){
    return fecha / 10000;
}

int obtenerMes(int fecha){
    return (fecha % 10000) / 100;
}


int obtenerPosMayor(int v[CANT_CANCIONES]){
    int mayor = -1;
    int pos = 0;

    for (int i = 0; i < CANT_CANCIONES; i++)
    {
        if (v[i] > mayor){
            mayor = v[i];
            pos = i;
        }
    }

    return pos;
}

/**
 * 1. Desarrollar un módulo que devuelva el nombre de la canción más escuchada en el mes de junio de
2020
*/
string cancionMasEscuchada(ST_ESCUCHADA escuchadas[CANT_ESCUCHADAS], ST_CANCION canciones[CANT_CANCIONES]){
    int i = 0;
    int cantidadReproducciones[CANT_CANCIONES] = {0};

    for (int i = 0; i < CANT_ESCUCHADAS; i++)  
    {
        int mes = obtenerMes(escuchadas[i].fecha);
        int anio = obtenerAnio(escuchadas[i].fecha);

        int codigoCancion = escuchadas[i].codigoCancion;
        if( mes == 6 && anio == 2020){
            cantidadReproducciones[codigoCancion-1]++;
        }
    }
    
    int pos = obtenerPosMayor(cantidadReproducciones);

    return canciones[pos].nombre;
}

void separaDuracion(int duracion, int &minutos, int &segundos){
    minutos = duracion / 100;
    segundos = duracion % 100;
}

void separaDuracionDisco(int duracionDisco, int &minutos, int &segundos){
    int horas = 0;

    if (duracionDisco > 3600){
        horas = duracionDisco / 3600;
    }
  
    minutos = (duracionDisco % 3600) / 60;
    segundos = (duracionDisco % 3600) % 60;
}

// Punto 2
void imprimirListado(ST_CANCION canciones[CANT_CANCIONES]){
    int i = 0;
    string nombreDisco = "";
    int duracionDisco = 0;
    int minutos = 0;
    int segundos = 0;

    while (i < CANT_CANCIONES)
    {
        nombreDisco = canciones[i].disco;
        duracionDisco = 0;
        cout << "Disco: " << nombreDisco << endl;
        while (i < CANT_CANCIONES && nombreDisco == canciones[i].disco)
        {
            // duración en formato MMSS
            separaDuracion(canciones[i].duracion, minutos, segundos);
            cout << canciones[i].nombre << " - Duracion: " << minutos << ":" << segundos << endl;
            duracionDisco += minutos*60 + segundos;
            i++;
        }
        separaDuracionDisco(duracionDisco, minutos, segundos);
        cout << "Duracion total del disco: " << minutos << ":" << segundos << endl;
    }
    
}

int main () {
    ST_CANCION canciones[CANT_CANCIONES];
    ST_ESCUCHADA escuchadas[CANT_ESCUCHADAS];

    ordenarCanciones(canciones);
    cout << cancionMasEscuchada(escuchadas, canciones) << endl;

    imprimirListado(canciones);

    return 0;
}