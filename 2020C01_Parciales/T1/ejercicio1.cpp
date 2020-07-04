#include <iostream>

using namespace std;

int main () {
    int n = 0;
    int m = 0;

    cout << "Ingrese N: ";
    cin >> n;
    cout << endl;
    int v1[n];

    cout << "Ingrese N: ";
    cin >> m;
    cout << endl;
    int v2[m];

    if (n != m){
        // termina el programa
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> v1[i];
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> v2[i];
        cout << endl;
    }

    int s[n];
    int d[n];

    int i = 0;
    while (i < m)
    {
        s[i] = v1[i] + v2[m-1-i];
        i++;
    }

    cout << "Resultado 1: " << endl;
    for (int h = 0; h < n; h++)
    {
        cout << s[h] << endl;
    }
    
    int j = 0;
    while (j < m)
    {
        d[j] = v1[j] - v2[j];
        j++;
    }
    
    cout << "Resultado 2: " << endl;
    for (int h = 0; h < n; h++)
    {
        cout << d[h] << endl;
    }

    int p[n] = {0};
    for (int k = 0; k < n; k++)
    {
        p[k] = p[k] + (v1[k] * v2[k]);
    }

    cout << "Resultado del producto escalar: " << endl;
    for (int h = 0; h < n; h++)
    {
        cout << p[h] << endl;
    }

        
    return 0;
}