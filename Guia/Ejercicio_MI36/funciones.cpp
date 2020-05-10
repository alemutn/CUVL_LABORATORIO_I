#include "funciones.h"

int maximoComunDivisor(int a, int b)
{
    int r = a % b;

    while (r != 0)
    {
        a = b;
        b = r;
        r = a % b;
    }

    return b;
}

void simplificar(int num1, int num2, int &cantidadSimplificaciones, int &menorFactorComun)
{
    int i = 2;
    int factorComun = 0;

    while (maximoComunDivisor(num1, num2) > 1)
    {

        if (num1 % i == 0 && num2 % i == 0)
        {
            num1 = num1 / i;
            num2 = num2 / i;
            factorComun = i;
            cantidadSimplificaciones++;
        }
        else
        {
            i++;
        }

        if (menorFactorComun > factorComun || menorFactorComun == 1)
        {
            menorFactorComun = factorComun;
        }
    }

    return;
}