#include <iostream>

using namespace std;

#define CANT_CLIENTES 10

struct ST_CLIENTE {
    int codigo;
    string nombre;
    string mail;
    float montoCompra;
};

void intercambiarPosiciones(ST_CLIENTE clientes[CANT_CLIENTES], int pos){
    ST_CLIENTE aux;

    aux = clientes[pos];
    clientes[pos] = clientes[pos + 1];
    clientes[pos + 1] = aux;
    return;
}

void ordenarPorCodigo(ST_CLIENTE clientes[CANT_CLIENTES])
{

    for (int i = 0; i < CANT_CLIENTES - 1; i++)
    {
        for (int j = 0; j < CANT_CLIENTES - i - 1; j++)
        {
            if (clientes[j].codigo >= clientes[j + 1].codigo)
            {
                intercambiarPosiciones(clientes, j);
            }
        }
    }

    return;
}

int busquedaClientePorCodigo(ST_CLIENTE clientes[CANT_CLIENTES], int codigo)
{
    int inferior = 0;
    int superior = CANT_CLIENTES - 1;
    int medio = -1;
    int pos = -1;

    while (inferior < superior)
    {
        medio = (inferior + superior) / 2;
        if (clientes[medio].codigo == codigo)
        {
            pos = medio;
        }

        if (clientes[medio].codigo < codigo)
        {
            inferior = medio + 1;
        }
        else
        {
            superior = medio - 1;
        }
    }

    return pos;
}

void actualizarMontoDeCompra(ST_CLIENTE clientes[CANT_CLIENTES]){

    int codigo = -1;
    float compra = -1;

    cout << "Ingrese el código cliente: ";
    cin >> codigo;
    cout << endl;

    cout << "Ingrese el monto de compra: ";
    cin >> compra;
    cout << endl;

    ordenarPorCodigo(clientes);
    int pos = busquedaClientePorCodigo(clientes, codigo);

    if (pos > -1){
        clientes[pos].montoCompra += compra;
    }
    else{
        cout << "El cliente: " << codigo << " no existe" << endl;
    }
}

void ordenarPorMontoCompra(ST_CLIENTE clientes[CANT_CLIENTES])
{
    for (int i = 0; i < CANT_CLIENTES - 1; i++)
    {
        for (int j = 0; j < CANT_CLIENTES - i - 1; j++)
        {
            if (clientes[j].montoCompra <= clientes[j + 1].montoCompra)
            {
                intercambiarPosiciones(clientes, j);
            }
        }
    }

    return;
}

void imprimirMejoresNClientes(ST_CLIENTE clientes[CANT_CLIENTES]){
    int cantidad;

    cout << "Ingrese la cantidad de clientes a participar en la promoción: ";
    cin >> cantidad;
    cout << endl;

    // validar que cantidad sea menor o igual que CANT_CLIENTES

    ordenarPorMontoCompra(clientes);
    for (int i = 0; i < cantidad; i++)
    {
        /* imprimir estructura */
    }

    return;

}

int main()
{
    ST_CLIENTE clientes[CANT_CLIENTES];

    // cargar el vector de clientes;


    // Punto 4
    actualizarMontoDeCompra(clientes);

    // Punto 6
    imprimirMejoresNClientes(clientes);

    return 0;
}