#include <iostream>

#define FILAS 3
#define COLUMNAS 3

#define FICHA_X 1
#define FICHA_O 4


using namespace std;

void ingresoJugadorX(int &f, int &c) {
    cout << "Jugador X: " << endl;
    cout << "Ingrese la fila: ";
    cin >> f;
    cout << endl;
    cout << "Ingrese la columna: ";
    cin >> c;
    cout << endl;
}

void ingresoJugadorY(int &f, int &c) {
    cout << "Jugador Y: " << endl;
    cout << "Ingrese la fila: ";
    cin >> f;
    cout << endl;
    cout << "Ingrese la columna: ";
    cin >> c;
    cout << endl;
}

char obtenerFicha(int valor){
    char ficha = ' ';

    if (valor == FICHA_X) {
        ficha = 'X';
    }

    if (valor == FICHA_O)
    {
        ficha = 'O';
    }

    return ficha;
}

int obtenerValor(char ficha)
{
    int valor = FICHA_X;
    if (ficha == 'O')
    {
        valor = FICHA_O;
    }

    return valor;
}

void imprimirTablero(int tablero[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++)
    {
        for (int j = 0; j < COLUMNAS; j++)
        {
            cout << obtenerFicha(tablero[i][j]);
            if(j < COLUMNAS - 1){
                cout << " | ";
            }
        }
        cout << endl;
        if (i < FILAS - 1){
            cout << "----------" << endl;
        }
    }
}

char determinarJugadorGanador(int val){
    char ganador = ' ';
    if (val == 3)
    {
        ganador = 'X';
    }

    if (val == 12)
    {
        ganador = 'O';
    }

    return ganador;
}

char ganaJugador(int tablero[FILAS][COLUMNAS]){
    int i = 0;
    char ganador = ' ';
    int resultado = 0;

    // busca ganador por fila
    while (i < FILAS && ganador == ' ')
    {
        for (int j = 0; j < COLUMNAS; j++)
        {
            resultado += tablero[i][j];
        }

        ganador = determinarJugadorGanador(resultado);
        resultado = 0;
        i++;
    }

    // busca ganador por columna
    resultado = 0;
    i = 0;
    while (i < FILAS && ganador == ' ')
    {
        for (int j = 0; j < COLUMNAS; j++)
        {
            resultado += tablero[j][i];
        }

        ganador = determinarJugadorGanador(resultado);
        resultado = 0;
        i++;
    }

    // busca ganador por diagonal principal
    if(ganador == ' '){
        resultado = 0;
        for (int f = 0; f < FILAS; f++)
        {
            resultado += tablero[f][f];
        }

        ganador = determinarJugadorGanador(resultado);
    }

    // busca ganador por diagonal secundaria
    if(ganador == ' '){
        resultado = 0;
        int col = 0;
        for (int i = FILAS - 1; i >= 0; i--)
        {
            resultado += tablero[i][col++];
        }

        ganador = determinarJugadorGanador(resultado);
    }

    return ganador;
}

bool juegoTerminado(int tablero[FILAS][COLUMNAS]){
    int i = 0;
    int j = 0;
    bool terminado = true;

    while (terminado && i < FILAS){
        j = 0;
        while (terminado && j < COLUMNAS)
        {
            if(tablero[i][j] == 0){
                terminado = false;
            }
            j++;
        }
        i++;
    }
    return terminado;
}

int main () {
    int tablero[FILAS][COLUMNAS] = {{0}};

    int f = 0;
    int c = 0;
    char ganador = ' ';

    imprimirTablero(tablero);

    while (!juegoTerminado(tablero) && ganador == ' '){
        ingresoJugadorX(f, c);
        tablero[f][c] = FICHA_X;

        ganador = ganaJugador(tablero);
        if (ganador == ' ')
        {
            ingresoJugadorY(f, c);
            tablero[f][c] = FICHA_O;
        }
        ganador = ganaJugador(tablero);
        imprimirTablero(tablero);
        cout << endl;
    }

   
    if(ganador != ' '){
        cout << "el ganador es: " << ganador << endl;
    }
    else
    {
        cout << "empate!" << endl;
    }

    imprimirTablero(tablero);

    return 0;
}