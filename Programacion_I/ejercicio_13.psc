Proceso ejercicio_13
	
	Definir factor1 Como Entero;
	Definir factor2 Como Entero;
	
	Escribir "Ingrese el primer factor";
	leer factor1;
	
	Escribir "Ingrese el segundo factor";
	leer factor2;
	
	
	Definir i Como Entero;
	Definir suma Como Entero;
	suma = 0;
	
	Para i=0 hasta factor1 - 1 Con Paso 1 Hacer
		suma = suma + factor2;
	FinPara
	
	Mostrar "El producto de ", factor1, " y ", factor2, " es: ", suma;
	
FinProceso
