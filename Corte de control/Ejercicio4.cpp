#include <iostream>

using namespace std;

#define CANT_ELEMENTOS 100

struct ST_IMPUESTO
{
    string nombreProvincia;
    string categoria;
    string impuesto;
    float monto;
};


void generaListado(ST_IMPUESTO impuestos[], int cantidad){

    int i = 0;
    string provincia = "";
    int categoriasPorProvincia = 0;
    float totalProvincia  = 0;

    string categoria = "";
    int impuestosPorCategoria = 0;
    float totalCategoria = 0;

    while (i < cantidad)
    {
        provincia = impuestos[i].nombreProvincia;
        totalProvincia = 0;
        categoriasPorProvincia = 0;

        cout << "Provincia: " << provincia << endl;

        while (i < cantidad && provincia == impuestos[i].nombreProvincia)
        {
            categoria = impuestos[i].categoria;
            totalCategoria = 0;
            impuestosPorCategoria = 0;

            cout << "Categoria: " << categoria << endl;

            while (i < cantidad && provincia == impuestos[i].nombreProvincia && categoria == impuestos[i].categoria){
                impuestosPorCategoria++;
                totalCategoria = totalCategoria + impuestos[i].monto;
                i++;
            }

            cout << "Cantidad de impuestos: " << impuestosPorCategoria << " Importe: " << totalCategoria << endl;
            cout << endl;
            categoriasPorProvincia++;
            totalProvincia = totalProvincia + totalCategoria;
        }
        
        cout << "-------------------" << endl;
        cout << "Cant. categorias: " << categoriasPorProvincia << " Importe: " << totalProvincia << endl;

    }
    

}

int main () {

    ST_IMPUESTO impuestos[CANT_ELEMENTOS];

    generaListado(impuestos, CANT_ELEMENTOS);

    return 0;
}