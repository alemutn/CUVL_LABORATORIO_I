#include <iostream>

using namespace std;

/**
 * Ej. 7​: ​Dado el vector generado en el ejercicio 5​, desarrolle un procedimiento ​que genere un vector ordenado
 * por número de legajo (cada registro debe tener los campos legajo y apellido y nombre) para todos los alumnos
 * que se inscribieron una o más veces. Cada legajo debe ocupar una posición única y predecible. El intervalo de
 * los legajos es 80001 a 80100 y están todos al menos una vez.
*/

struct ST_ALUMNO{
    int legajo;
    int materia;
    int dia;
    int mes;
    int anio;
    string nombre;
};

void filtrarAlumnosPorLegajo(ST_ALUMNO vec[], int cantidad, ST_ALUMNO vec2[100]){
    int k = 0;
    for (int i = 0; i < cantidad; i++)
    {
        if(vec[i].legajo >= 80001 && vec[i].legajo <= 80100){
            vec2[k] = vec[i];
            k++;
        }
    }
    
}

void procesarAlumnos(ST_ALUMNO vec1[], ST_ALUMNO vec2[], ST_ALUMNO vec3[200], int cantidad){

    int i = 0;
    int j = 0;
    int k = 0;

    while (i < cantidad && j < cantidad)
    {
        if (vec1[i].legajo < vec2[j].legajo){
            vec3[k] = vec1[i];
            i++;
        }
        else{
            vec3[k] = vec2[j];
            j++;
        }
        k++;
    }

    while (i < cantidad){
        vec3[k] = vec1[i];
        i++;
        k++;
    }
    
    while (j < cantidad)
    {
        vec3[k] = vec2[j];
        j++;
        k++;
    }
}

int main () {

    ST_ALUMNO alumnos1[1000];
    ST_ALUMNO alumnos2[1000];

    ST_ALUMNO alumnos1A[100];
    ST_ALUMNO alumnos2A[100];

    filtrarAlumnosPorLegajo(alumnos1, 1000, alumnos1A);
    filtrarAlumnosPorLegajo(alumnos2, 1000, alumnos2A);

    ST_ALUMNO resultado[200];

    procesarAlumnos(alumnos1A, alumnos2A, resultado, 100);

    return 0;
}