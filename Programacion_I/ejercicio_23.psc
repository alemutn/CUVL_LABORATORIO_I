Proceso sin_titulo
	
	Definir num como Real;
	Definir minimoPositivo como Real;
	Definir maximoNegativo como Real;
	Definir minimoDelRango como Real;
	Definir promedio como Real;
	Definir cantidadDeNumeros Como Entero;
	Definir sumaParcial Como Real;
	
	cantidadDeNumeros = 0;
	sumaParcial = 0;
	minimoPositivo = 0;
	maximoNegativo = 0;
	
	Escribir "Ingrese un n�mero";
	Leer num;
	
	Mientras num <> 0 Hacer
		cantidadDeNumeros = cantidadDeNumeros + 1;
		sumaParcial = sumaParcial + num;
		
		Si num > 0 Entonces
			si num < minimoPositivo o minimoPositivo == 0 Entonces
				minimoPositivo = num;
			FinSi
		SiNo
			si num > maximoNegativo o maximoNegativo == 0 Entonces
				maximoNegativo = num;
			FinSi
		FinSi
		
		Si num >= -17.3 y num <= 26.9 Entonces
			si num < minimoDelRango Entonces
				minimoDelRango = num;
			FinSi
		FinSi
		
		Escribir "Ingrese un n�mero";
		Leer num;
				
	FinMientras
	
	si cantidadDeNumeros > 0 Entonces
		Escribir "El m�nimo de los positivos es: ", minimoPositivo;
		Escribir "El m�ximo de los negativos es: ", maximoNegativo;
		Escribir "El m�nimo en el rango [-17.3, 26.9] es: ", minimoDelRango;
		promedio = sumaParcial / cantidadDeNumeros;
		Escribir "El promedio de todos los n�meros es: ", promedio;
	SiNo
		Escribir "No se ingresaron n�meros";
	FinSi
	
FinProceso
