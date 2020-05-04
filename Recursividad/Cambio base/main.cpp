#include <iostream>
#include <math.h>

using namespace std;

/**
 * (n, b)
 * (10, 10) --> (10, 8) = 12
*/

int decimalAOctal(int num, int p = 0){
    const int base = 8;

    if (num == 0){
        return 0;
    }

    return (num % base) * pow(10, p) + decimalAOctal(num / base, ++p);
}

int main () {
    int num;

    cout << "Ingrese un numero decimal: " << endl;
    cin >> num;
    cout << endl;

    cout << decimalAOctal(num) << endl;
    return 0;
}