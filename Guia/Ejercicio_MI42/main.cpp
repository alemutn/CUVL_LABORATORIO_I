#include <iostream>

using namespace std;

/**
 * Ej. MI-42: De un censo realizado en una población se conocen los siguientes datos:
- Día de nacimiento (2 dig.)
- Mes (2 dig.)
- Año (4 dig.)
- Sexo ('M'=masc. 'F'=fem.)
Con estos datos de cada habitante se forma un lote finalizado con un día cero.
Desarrollar el programa que determine e imprima:
    1) Cuántos nacimientos hubo en el mes de octubre de todos los años.
    2) Cuántos nacimientos hubo antes del 9 de julio de 1990.
    3) Cuántos nacimientos de mujeres hubo en la primavera del 1982.
    4) Sexo de la persona más vieja (solo existe una).
*/

void ingresarDatoNumerico(string mensaje, int &valor){
    cout << mensaje;
    cin >> valor;
    cout << endl;
}

void contarNacimientosOctubre(int mes, int &cantidadNacimientos){
    if (mes == 10){
        cantidadNacimientos++;
    }
}

int armarFecha(int dia, int mes, int anio){
    return anio * 10000 + mes * 100 + dia;
}

void contarNacimientosMujeresPrimavera(int fecha, char sexo, int &cantidad){
    if(sexo == 'F' && fecha >= 19820921 && fecha <= 19821220){
        cantidad++;
    }
}

void obtenerSexoPersonaMasVieja(int fecha, char sexo, int &fechaMenor, char &sexoPersonaMenor)
{
    if(fecha < fechaMenor || fechaMenor == 0){
        fechaMenor = fecha;
        sexoPersonaMenor = sexo;
    }
}

int main () {

    int dia = 0;
    int mes = 0;
    int anio = 0;
    char sexo = ' ';

    int fechaMenor = 0;

    //salidas
    int nacimientosOctubre = 0;
    int nacimientos1982 = 0;
    char sexoPersonaMasVieja = ' ';

    ingresarDatoNumerico("Ingrese día de nacimiento: ", dia);
    while (dia != 0)
    {
        ingresarDatoNumerico("Ingrese mes de nacimiento: ", mes);
        ingresarDatoNumerico("Ingrese año de nacimiento: ", anio);
        cout << "Ingrese el sexo: ";
        cin >> sexo;
        cout << endl;

        // procesar los datos
        int fecha = armarFecha(dia, mes, anio);

        contarNacimientosOctubre(mes, nacimientosOctubre);
        contarNacimientosMujeresPrimavera(fecha, sexo, nacimientos1982);
        obtenerSexoPersonaMasVieja(fecha, sexo, fechaMenor, sexoPersonaMasVieja);

        ingresarDatoNumerico("Ingrese día de nacimiento: ", dia);
    }


    // impresión de resultados
    cout << "La cantidad de nacimientos del mes de octubre es: " << nacimientosOctubre << endl;

    // completar resto de los puntos pedidos en el enunciado
    
    return 0;

}