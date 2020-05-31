#include <iostream>

using namespace std;

#define CANT_INGREDIENTES 4
#define CANT_RECETAS 3


struct ST_INGREDIENTE {
    string nombre;
    int stock;
    int stock_maximo; // if(stock < (stock_maximo * 0.3) )
};

struct ST_COMPONENTE {
    string nombre;
    int cantidad;
};

struct ST_RECETA {
    string nombre;
    ST_COMPONENTE componente_1;
    ST_COMPONENTE componente_2;
    ST_COMPONENTE componente_3;
    float precio;
};

void cargarIngredientes(ST_INGREDIENTE ingredientes[CANT_INGREDIENTES])
{
    for (int i = 0; i < CANT_INGREDIENTES; i++)
    {
        cout << "Ingrese el nombre del ingrediente: ";
        cin >> ingredientes[i].nombre;
        cout << endl;
        cout << "Ingrese el stock del ingrediente: ";
        cin >> ingredientes[i].stock;
        cout << endl;
        cout << "Ingrese el stock máximo del ingrediente: ";
        cin >> ingredientes[i].stock_maximo;
    }
}

void cargarRecetas(ST_RECETA recetas[CANT_RECETAS])
{
    for (int i = 0; i < CANT_RECETAS; i++)
    {
        cout << "Ingrese nombre de la receta: ";
        cin >> recetas[i].nombre;
        cout << endl;
        cout << "Ingrese el nombre del 1er ingredente: ";
        cin >> recetas[i].componente_1.nombre;
        cout << endl;
        cout << "Ingrese la cantidad del 1er ingredente: ";
        cin >> recetas[i].componente_1.cantidad;
        cout << endl;
        cout << "Ingrese el nombre del 2do ingredente: ";
        cin >> recetas[i].componente_2.nombre;
        cout << endl;
        cout << "Ingrese la cantidad del 2do ingredente: ";
        cin >> recetas[i].componente_2.cantidad;
        cout << endl;
        cout << "Ingrese el nombre del 3er ingredente: ";
        cin >> recetas[i].componente_3.nombre;
        cout << endl;
        cout << "Ingrese la cantidad del 3er ingredente: ";
        cin >> recetas[i].componente_3.cantidad;
        cout << endl;
    }
}

void leerOpcionMenu(int &opcion)
{
    cout << "### Menu ###" << endl;
    cout << "1 - Vender un plato" << endl;
    cout << "2 - Consultar stock de producto" << endl;
    cout << "3 - Cargar stock" << endl;
    cout << "4 - Salir" << endl;
    cin >> opcion;
    return;
}

int buscarReceta(ST_RECETA recetas[CANT_RECETAS], string nombreBuscado)
{
    int posicion = -1;
    int i = 0;
    while (i < CANT_RECETAS && posicion == -1){
        if (recetas[i].nombre == nombreBuscado){
            posicion = i;
        }
        i++;
    }

    return posicion;
}

int buscarIngrediente(ST_INGREDIENTE ingredientes[CANT_INGREDIENTES], string nombreBuscado)
{
    int posicion = -1;
    int i = 0;
    while (i < CANT_INGREDIENTES && posicion == -1)
    {
        if (ingredientes[i].nombre == nombreBuscado)
        {
            posicion = i;
        }
        i++;
    }

    return posicion;
}

bool tengoStockParaReceta(ST_RECETA receta, ST_INGREDIENTE ingredientes[CANT_INGREDIENTES],
     int &posIngrediente1, int &posIngrediente2, int &posIngrediente3)
{
    bool puedeCocinar = true;

    posIngrediente1 = buscarIngrediente(ingredientes, receta.componente_1.nombre);
    if (posIngrediente1 < 0 ||
        (posIngrediente1 >= 0 && ingredientes[posIngrediente1].stock < receta.componente_1.cantidad))
    {
        puedeCocinar = false;
    }

    posIngrediente2 = buscarIngrediente(ingredientes, receta.componente_2.nombre);
    if (posIngrediente2 < 0 ||
        (posIngrediente2 >= 0 && ingredientes[posIngrediente2].stock < receta.componente_2.cantidad))
    {
        puedeCocinar = false;
    }

    posIngrediente3 = buscarIngrediente(ingredientes, receta.componente_3.nombre);
    if (posIngrediente3 < 0 ||
        (posIngrediente3 >= 0 && ingredientes[posIngrediente3].stock < receta.componente_3.cantidad))
    {
        puedeCocinar = false;
    }

    return puedeCocinar;
}

void actualizarStock(ST_INGREDIENTE ingredientes[CANT_INGREDIENTES], ST_RECETA receta, int posIngrediente1, int posIngrediente2, int posIngrediente3){
    ingredientes[posIngrediente1].stock = ingredientes[posIngrediente1].stock - receta.componente_1.cantidad;
    ingredientes[posIngrediente2].stock = ingredientes[posIngrediente2].stock - receta.componente_2.cantidad;
    ingredientes[posIngrediente3].stock = ingredientes[posIngrediente3].stock - receta.componente_3.cantidad;
}

int main()
{
    ST_RECETA recetas[CANT_RECETAS];
    ST_INGREDIENTE ingredientes[CANT_INGREDIENTES];

    cargarIngredientes(ingredientes);
    cargarRecetas(recetas);

    int opcion = 4;
    leerOpcionMenu(opcion);
    string nombrePlato;
    int posicionReceta;

    while (opcion < 4)
    {
        switch (opcion)
        {
            case 1:
                cout << "Ingrese del plato deseado: ";
                cin >> nombrePlato;
                posicionReceta = buscarReceta(recetas, nombrePlato);
                if(posicionReceta >= 0){
                    ST_RECETA receta = recetas[posicionReceta];
                    int posIngrediente1 = -1;
                    int posIngrediente2 = -1;
                    int posIngrediente3 = -1;

                    if(tengoStockParaReceta(receta, ingredientes, posIngrediente1, posIngrediente2, posIngrediente3)){
                        actualizarStock(ingredientes, receta, posIngrediente1, posIngrediente2, posIngrediente3);
                    }
                    else {
                        cout << "No hay stock suficiente para el plato: " << receta.nombre << endl;
                    }
                }
                break;
            case 2:

                break;
            default:
                break;
        }
        leerOpcionMenu(opcion);
    }

    return 0;
}