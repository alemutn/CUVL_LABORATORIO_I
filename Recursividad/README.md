# Ejercicios - Recursividad 
----

## Ejercicio 1 - Serie L

Desarrollar una función recursiva que permita dada la cantidad de términos generar la siguiente serie:
    
    `N = 5 ==> {0, 1, 3, 6, 10, 15}`
  
## Ejercicio 2 - Número "e"

La constante matemática "e" puede aproximarse según la siguiente serie numérica: 

    `e = 1 + 1/1! + 1/2! + 1/3! + .... + 1/n! = 2,718...`

Desarrollar una función recursiva que permita obtener el valor aproximado del número "e" según una cantidad de términos determinada por el usuario.

*Nota: puede desarrollar funciones auxiliares si lo necesita.*

## Ejercicio 3 - Conjetura de Collatz

La secuencia de Collatz de un número entero se construye de la siguiente forma:

* Si el número es par, se lo divide por dos;
* Si es impar, se le multiplica tres y se le suma uno;
* La sucesión termina al llegar a uno.

La conjetura de Collatz afirma que, al partir desde cualquier número, la secuencia siempre llegará a 1.
A pesar de ser una afirmación a simple vista muy simple, no se ha podido demostrar si es cierta o no.

Desarrolle un programa que entregue la secuencia de Collatz de un número entero.

**Ejemplo**
Para n = 18, la conjetura de Collatz sería: 

`18 9 28 14 7 22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1`

## Ejercicio 4 - Serie Fibonacci
En matemáticas, la sucesión o serie de Fibonacci es la siguiente sucesión infinita de números naturales:

`0 , 1 , 1 , 2 , 3 , 5 , 8 , 13 , 21 , 34 , 55 , ...`

La sucesión comienza con los números 0 y 1, a partir de estos, **cada término es la suma de los dos anteriores**

Desarrolle una función recursiva que permita obtener la serie de Fibonacci a un determinado término.

Ejemplo:
Para N = 5, la serie de Fibonacci será `0 , 1 , 1 , 2 , 3`


## Ejercicio 5 - Sistema Octal

Desarrolle una función recursiva que permita convertir un número decimal en su equivalente en sistema octal.

### Descripción 
El sistema de numeración octal es un sistema de numeración en base 8. El sistema octal usa 8 dígitos (0, 1, 2, 3, 4, 5, 6, 7) y cada dígito tiene el mismo valor que en el sistema de numeración decimal. 

Como el sistema de numeración octal usa la notación posicional entonces para el número **octal** 3452 tenemos que: 3*8`3 + 4*8^2 + 5*8^1 + 2*8^0 = 3*512 + 4*64 + 40 + 2  = 1536 + 256 + 40 + 2 = **1834 en decimal**

### Conversión de decimal a octal

Para poder convertir un número en base decimal a base octal se divide dicho número entre 8, dejando el residuo y dividiendo el cociente sucesivamente entre 8 hasta obtener cociente 0, luego los restos de las divisiones leídos en orden inverso indican el número en octal.

Ver ejemplo en el siguiente link: [Wikipedia - Sistema Octal](https://es.wikipedia.org/wiki/Sistema_octal#M%C3%A9todos_de_conversi%C3%B3n)

## Ejercicio 6 - Factorial

El siguiente fragmento de código, no calcula de forma correcta el factorial de un número. 
Utilizando las herramientas aprendidas (como debugger, prueba de escritorio, etc) analice el código y explique por qué.
Proponga una solución que corrija el código.

```c++
#include <iostream>
using namespace std;

int factorial(int n){

    if(n==0){
        return 1;
    }

    return n * factorial(--n);
}

int main () {
    cout << factorial(4) << endl;
    return 0;
}

```



