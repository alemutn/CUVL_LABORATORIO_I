#include <iostream>

using namespace std;


int buscarPesquisa(float numeros[], float pesquisa, int cantidad) {
    int posicion = -1;

    int i = 0;
    while (i < cantidad && posicion == -1)
    {
        if (numeros[i] == pesquisa)
        {
            posicion = i;
        }

        i++;
    }

    return posicion;
}

void entrePosiciones(float numeros[], int &posAnterior, int &posSiguiente, int cantidad) {

    int i = 0;
    while(i < cantidad) {
        
    }
}

int main () {

    return 0;
}