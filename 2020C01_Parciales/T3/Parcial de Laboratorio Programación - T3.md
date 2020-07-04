**Tema 3**                                                                                                                          25/06/2020

# Parcial de Laboratorio Programación

## Ejercicio 1

Un programador se encuentra trabajando en un proyecto en el cuál le solicitan que desarrolle una aplicación que permita trabajar con un conjunto de números enteros El programador liberó el código del programa que se adjunta en el archivo ejercicio1.cpp.

A partir del código dado, se pide:

1. Mejore el código aplicando modularización, nombre descriptivos, defines, etc. Debe encontrar como mínimo 3 funciones/procedimientos.
2. ¿Es necesario inicializar la variable s? ¿Por qué?

## Ejercicio 2

Una plataforma de streaming de múscia requiere desarrollar un sistema que le permita obtener algunos datos estadísticos sobre lo que escuchan sus usuarios.

Esta plataforma posee un conjunto de 100000 canciones. Este conjunto se encuentra completo pero <u>desordenado</u>. 

De cada canción se conoce:

* Código de canción es un número entero entre 1 - 10000

* Nombre de la canción

* Nombre del disco

* Código de artista: es un número entero entre 1 - 101

* Duración: número entero en el formato MMSS

Se dispone también de un conjunto de datos donde se registra en qué fecha fue escuchada una canción. Este conjunto de datos se encuentra ordenado por fecha y canción y posee la siguiente estructura:

* Fecha en la que fue eschuchada la canción

* Código de canción

<u>Ejemplo</u>:

| Fecha    | canción |
| -------- | ------- |
| 20200625 | 1       |
| 20200625 | 1       |
| ...      | ...     |
| 20200625 | 2       |
| 20200625 | 2       |

**Se pide**:

1. Desarrollar un módulo que devuelva el nombre de la canción más escuchada en el mes de junio de 2020

2. Suponiendo que el vector de canciones se encuentra ordenado por disco y código de canción, desarrolle un módulo que permita generar un listado con la siguiente información:
   
   ```
   Disco: <nombre del disco>
     <nombre de la canción 1> - Duración: MM:SS
     <nombre de la canción 2> - Duración: MM:SS
     ----
     Duración total del disco: MM:SS
   
   Disco: <nombre del disco>
     <nombre de la canción 1> - Duración: MM:SS
     <nombre de la canción 2> - Duración: MM:SS
     ----
     Duración total del disco: MM:SS
   ```

**Restricciones**:

* Para el punto 1 no puede realizar búsqueda secuenciales sobre el vector de canciones
