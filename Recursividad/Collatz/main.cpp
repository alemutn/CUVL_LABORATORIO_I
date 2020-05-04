#include <iostream>

using namespace std;

/**
 * Conjetura de Collatz
 * La secuencia de Collatz de un número entero se construye de la siguiente forma:
 * - Si el número es par, se lo divide por dos;
 * - Si es impar, se le multiplica tres y se le suma uno;
 * - La sucesión termina al llegar a uno.
 * La conjetura de Collatz afirma que, al partir desde cualquier número, la secuencia siempre llegará a 1. 
 * A pesar de ser una afirmación a simple vista muy simple, no se ha podido demostrar si es cierta o no.
 * 
 * Desarrolle un programa que entregue la secuencia de Collatz de un número entero:
 * n: 18
 * 18 9 28 14 7 22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1
*/

int collatz(int n){

    cout << n << endl;

    if (n == 1)
    {
        return 1;
    }
    int numero;
    if (n % 2 == 0)
    {
        numero = n / 2;
    }
    else {
        numero = 1 + (n * 3);
    }

    return collatz(numero);
}

int main () {
    collatz(18);

    return 0;
}