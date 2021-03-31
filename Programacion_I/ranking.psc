Proceso ranking
	
	Definir primerValor Como Entero;
	Definir segundoValor Como Entero;
	definir terceroValor Como Entero;
	
	primerValor = 0;
	segundoValor = 0;
	terceroValor = 0;
	
	Definir num Como Entero;
	Definir aux Como Entero;
	Definir i Como Entero;
	
	Para i = 0 hasta 9 Con Paso 1 Hacer
		Escribir "Ingrese un número"; 
		Leer num;
		
		Si num > primerValor o primerValor == 0 Entonces
			aux = primerValor;
			primerValor = num;
			num = aux;
		FinSi
		
		Si num > segundoValor o segundoValor == 0 Entonces
			aux = segundoValor;
			segundoValor = num;
			num = aux;
		FinSi
		
		
		Si num > terceroValor o terceroValor == 0 Entonces
			aux = terceroValor;
			terceroValor = num;
		FinSi
				
	FinPara
	
	
	Mostrar "Ranking: ";
	Mostrar primerValor;
	Mostrar segundoValor;
	Mostrar terceroValor;
	
FinProceso
