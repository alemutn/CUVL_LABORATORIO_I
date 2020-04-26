#include <iostream>

using namespace std;

// Escribir una función que permita convertir una temperatura dada en grados Celcius a grados Fahrenheit. (F = 9/5 * C + 32) 

float celciusAFahrenheit(int gradosCelcius){

    float gradosFahrenheit = 0;
    gradosFahrenheit = (9.0/5) * gradosCelcius + 32;
    return gradosFahrenheit;
}

int main() {

    int gradosCelcius = 0;

    cout << "Ingrese una temperatura en grados Celcius: ";
    cin >> gradosCelcius;
    cout << endl;

    cout << gradosCelcius << "°C son: " << celciusAFahrenheit(gradosCelcius) << "°F" << endl;

    return 0;
}
