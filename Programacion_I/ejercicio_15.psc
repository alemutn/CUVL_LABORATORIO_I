Proceso ejercicio_15
	// Se realiza una inspección en una fábrica de pinturas, y se detectaron 20 infracciones. De cada infracción se tomó nota de los siguientes datos:
	// - Tipo de Infracción (1, 2, 3, ó 4)
	// - Motivo de la infracción
	// - Valor de la multa
	// - Gravedad de la infracción (‘L’,‘M’, ‘G’)
	// Se pide informar al final del proceso:
	// - Los valores totales de la multa a pagar de acuerdo al tipo de gravedad.
	// - La leyenda “Clausurar fábrica” si la cantidad de infracciones 3 y 4 con gravedad “G” sean mayor a 3.
	// ############## Análisis #############
	// Entradas
	// - tipoDeInfraccion  - Entero - Precondiciones: tipoDeInfraccion ≥ 1 Y tipoDeInfraccion ≤ 4
	// - motivoDeInfraccion - Cadena - Preciondiciones: - 
	// - valorMulta - Real - Preciondiciones. valorMulta > 0
	// - gravedadInfraccion - Caracter  - (‘L’,‘M’, ‘G’)
	// - CANTIDAD_DE_INFRACCIONES
	// tipo de dato: Entero
	// condición: constante
	// valor: 20
	// Salidas
	// mensaje - variable - Cadena
	// totalLeves - variable - Real
	// totalModeradas - variable - Real
	// totalGraves - variable - Real
	Definir tipoInfraccion como Entero;
	Definir motivo como Cadena;
	Definir valorMulta como Real;
	Definir gravedadInfraccion como Caracter;
	Definir totalLeves como Real;
	Definir totalModeradas como Real;
	Definir totalGraves como Real;
	Definir CANTIDAD_DE_INFRACCIONES como Entero;
	CANTIDAD_DE_INFRACCIONES = 20;
	totalModeradas = 0;
	totalLeves = 0;
	totalGraves = 0;
	Definir i como Entero;
	Definir contadorClausura como Entero;
	contadorClausura = 0;
	// for (int i = 0; i < CANTIDAD_DE_INFRACCIONES ; i++) {...}
	Para i<-0 Hasta CANTIDAD_DE_INFRACCIONES - 1 Con Paso 1 Hacer
		Escribir "Ingrese tipo de infracci�n";
		Leer tipoInfraccion;
		Escribir "Ingrese motivo de la multa";
		Leer motivo;
		Escribir "Ingrese gravedad de la multa";
		Leer gravedadInfraccion;
		Escribir "Ingrese valor de la multa";
		Leer valorMulta;
		Segun gravedadInfraccion Hacer
			'L':
				totalLeves = totalLeves + valorMulta;
			'M':
				totalModeradas = totalModeradas + valorMulta;
			'G':
				totalGraves = totalGraves + valorMulta;
				Si tipoInfraccion == 3 o tipoInfraccion == 4 Entonces
					contadorClausura = contadorClausura + 1;
				FinSi
		FinSegun
	FinPara
	Escribir "El total de multas leves es: ", totalLeves;
	Escribir "El total de multas moderadas es: ", totalModeradas;
	Escribir "El total de multas graves es: ", totalGraves;
	Si contadorClausura > 3 Entonces
		Escribir "Clausurar f�brica";
	FinSi
FinProceso
