Proceso ejercicio_20
	
	// Dados 10 valores informar el mayor
	Definir num Como Entero;
	Definir i Como Entero;
	Definir numeroMayor Como Entero;
	
	Definir CANTIDAD_DE_VALORES Como Entero;
	CANTIDAD_DE_VALORES = 3;
	
	Escribir "Ingrese un n�mero entero";
	leer num;
	
	numeroMayor = num;
	
	Para i = 1 hasta CANTIDAD_DE_VALORES - 1 Con Paso 1 Hacer
		Escribir "Ingrese un n�mero entero";
		leer num;
		
		Si num > numeroMayor Entonces
			numeroMayor = num;
		FinSi
		
	FinPara
	
	Escribir "El n�mero mayor es: ", numeroMayor;
	
FinProceso
