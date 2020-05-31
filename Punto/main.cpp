#include <iostream>
#include <math.h>

using namespace std;

struct ST_PUNTO {
    int x;
    int y;
};

void cargaPunto(ST_PUNTO &punto){
    cout << "Ingrese componente x:";
    cin >> punto.x;
    cout << "Ingrese componente y:";
    cin >> punto.y;
    return;
}

/*

X - X1 = Y - Y1
------   ------   
X2 - X1  Y2 - Y1

...

Y = mX + b

*/

float distanciaEntrePUntos(ST_PUNTO punto_1, ST_PUNTO punto_2){
    float distancia = 0.0;
    distancia = sqrt(pow((punto_2.x - punto_1.x), 2) + pow((punto_2.y - punto_1.y), 2));
    return distancia;
}

// Y = mX + b
// Y - mX = b

void obtenerComponentesRecta(ST_PUNTO punto_1, ST_PUNTO punto_2, float &m, float &b){
    m = (punto_2.y - punto_1.y) / (punto_2.x - punto_1.x);

    b = punto_1.y - (m * punto_1.x);
    return;
}

int main()
{

    ST_PUNTO punto_1;
    ST_PUNTO punto_2;

    cout << "Ingrese datos del punto 1:" << endl;
    cargaPunto(punto_1);
    cout << "Ingrese datos del punto 2:" << endl;
    cargaPunto(punto_2);

    cout << "La distancia entre los puntos es: " << distanciaEntrePUntos(punto_1, punto_2) << endl;

    float m, b;
    obtenerComponentesRecta(punto_1, punto_2, m, b);
    cout << "La ecuación de la recta es: Y = " << m << "x + " << b << endl;

    int y = 0;
    for (int x = 4; x < 9; x++)
    {
        y = m * x + b;

        cout << "Para el valor de x: " << x << " el valor de Y es: " << y << endl;
    }

    return 0;
}