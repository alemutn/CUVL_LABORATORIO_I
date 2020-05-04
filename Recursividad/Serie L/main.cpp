#include <iostream>

using namespace std;

/**
 * Desarrollar una función recursiva que permita dado un número generar la siguiente serie:
 * N = 5 ==> {0, 1, 3, 6, 10, 15}
 * 
*/

int serieL(int n){
    if(n == 0) {
        return n;
    }
    
    int v = serieL(n - 1);
    cout << v << endl;
    return n + v;
}

int main () {

    int n;
    cout << "Ingrese un número: ";
    cin >> n;
    cout << endl;

    int res = serieL(n);
    cout << "El número generado es: " << res << endl;

    return 0;
}