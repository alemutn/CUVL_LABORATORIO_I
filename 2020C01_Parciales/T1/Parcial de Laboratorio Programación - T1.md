**Tema 1**                                                                                                                          25/06/2020

# Parcial de Laboratorio Programación

## Ejercicio 1

Un programador se encuentra trabajando en un proyecto en el cuál le solicitan que desarrolle una aplicación que permita realizar sumas, restas y producto escalar de vectores. El programador liberó el código del programa que se adjunta en el archivo ejercicio1.cpp.

A partir del código dado, se pide:

1. Mejore el código aplicando modularización, nombre descriptivos, defines, etc. Debe encontrar como mínimo 5 funciones/procedimientos.

2. Responda: ¿Por qué el vector "p" necesita ser inicializado y los vectores "s" y "d" no?

## Ejercicio 2

Una plataforma de juegos requiere desarrollar un sistema que le permita obtener algunos datos estadísticos sobre sus juegos y jugadores. 

Esta plataforma posee un conjunto de 100 juegos a los cuales pueden jugar los usuarios (jugadores) registrados en la plataforma. Este conjunto de juegos se encuentra completo pero <u>desordenado</u>. Los códigos de juegos se encuentran en el rango [100, 200].

De cada juego se conoce su código y nombre.

De los usuarios registrados en la plataforma, se conoce:

* Código: número entero secuencial que inicia en 1.

* Nombre

* Fecha de registración en formato AAAAMMDD

Actualmente la plataforma cuenta con 1000 usuarios que se encuentran ordenados por código de usuario.

Finalmente se dispone de un conjunto de datos qué relaciona a los usuarios con los juegos en los que participan. Este conjunto de datos se encuentra ordenado por juego y usuario y posee la siguiente estructura:

* Código de juego

* Código de usuario

<u>Ejemplo</u>:

| Juego | Usuario |
|:-----:|:-------:|
| 1     | 1       |
| 1     | 2       |
| 1     | 3       |
| ...   | ...     |
| 39    | 5       |

**Se pide**:

1. Desarrolle un módulo que permita generar un listado con la siguiente información:
   
       Juego: <nombre del juego 1>
          <Nombre Usuario 1> - Fecha de registración
          <Nombre Usuario 2> - Fecha de registración
       ----
       Cantidad total de usuario del juego: <cantidad>
       
       Juego: <nombre del juego 1>
          <Nombre Usuario 1> - Fecha de registración
          <Nombre Usuario 2> - Fecha de registración
       ----
       Cantidad total de usuario del juego: <cantid

**Restricciones**:

* Sobre el vector de juegos no puede realizar búsqueda secuenciales ni binarias.

* Sobre el vector de usuarios no puede realizar búsqueda secuenciales
