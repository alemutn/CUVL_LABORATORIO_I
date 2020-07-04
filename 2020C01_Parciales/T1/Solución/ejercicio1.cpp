#include <iostream>

using namespace std;

void ingresarDimension(string mensaje, int &n){
    cout << mensaje;
    cin >> n;
    cout << endl;
}

void cargarVector(string mensaje, int v[], int cantidad){
    cout << mensaje << endl;

    for (int i = 0; i < cantidad; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> v[i];
        cout << endl;
    }
}

void calcularSuma(int v1[], int v2[], int v3[], int cantidad){
    int i = 0;
    while (i < cantidad)
    {
        v3[i] = v1[i] + v2[cantidad-1-i];
        i++;
    }
}

void calcularResta(int v1[], int v2[], int v3[], int cantidad){
    int j = 0;
    while (j < cantidad)
    {
        v3[j] = v1[j] - v2[j];
        j++;
    }
}

void calcularProductoEscalar(int v1[], int v2[], int v3[], int cantidad){
    
    for (int k = 0; k < cantidad; k++)
    {
        v3[k] = v3[k] + (v1[k] * v2[k]);
    }

}

void imprimirVector(string mensaje, int v[], int cantidad){
    cout << mensaje << endl;
    for (int h = 0; h < cantidad; h++)
    {
        cout << v[h] << endl;
    }
}

int main () {
    int n = 0;
    
    ingresarDimension("Ingrese dimension: ", n);
    int v1[n];
    int v2[n];


    cargarVector("Cargar Primer Vector", v1, n);

    cargarVector("Cargar Segundo Vector", v2, n);

    int s[n];
    int d[n];

    calcularSuma(v1, v2, s, n);
    imprimirVector("Resultado 1: ", s, n);

    calcularResta(v1, v2, d, n);
    imprimirVector("Resultado 2: ", s, n);
    
    int p[n] = {0};
    calcularProductoEscalar(v1, v2, p, n);
    imprimirVector("Resultado del producto escalar: " , p, n);
        
    return 0;
}

/**
 * b) Hay que inicializar el vector "p" porque se utilizan sus valores antes de que se le asigne un valor
*/