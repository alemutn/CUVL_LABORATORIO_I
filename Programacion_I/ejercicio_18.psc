Proceso ejercicio_18
	// Dado un valor M determinar y emitir un listado 
	// con los M primeros múltiplos de 3 que no lo sean de 5,dentro del conjunto de los números naturales.
	
	Definir cantidadDeMultiplos Como Entero;
	Escribir "Ingrese la cantidad de múltiplos a determinar";
	Leer cantidadDeMultiplos;
	
	Definir i Como Entero;
	i = 0;
	
	Definir numeroAVerificar Como Entero;
	numeroAVerificar = 3;
	    //   4        4
	Mientras i < cantidadDeMultiplos Hacer
		
		Si numeroAVerificar % 3 == 0 Y numeroAVerificar % 5 <> 0 Entonces
			Mostrar "El número: ", numeroAVerificar, " es mul. de 3 y no de 5";
			i = i + 1;
		FinSi
		// 13
		numeroAVerificar = numeroAVerificar + 1;
		
	FinMientras
	
FinProceso
