#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

void MenuDeOpciones(float numeroUno, float numeroDos){
	char valorA[10] = {'x'};
	char valorB[10] = {'y'};
	ValorFloataCadenaChar(numeroUno, valorA);
	ValorFloataCadenaChar(numeroDos, valorB);

	printf("\n------------------------");
	printf("\n ELIJA UNA OPCIÓN: ");
	printf("\n1. Ingresar numero (A= %s)", valorA);
	printf("\n2. Ingresar numero (B= %s)", valorB);
	printf("\n3. Calcular todas las operaciones");
	printf("\n4. Informar resultados");
	printf("\n5. Salir");
	printf("\n");
	printf("\nOpcion:");
}

void ValorFloataCadenaChar(float numero, char* cadena){
	if(numero != NULL_VALUE){
		sprintf(cadena, "%.2f", numero);
	}
}

float CargarValor(float opcion){
	float numeroA, numeroB;
	if(opcion == 1){
		printf("\nIngrese un valor para A: ");
		scanf("%f", &numeroA);
		while(numeroA > MAX_VALUE || numeroA < MIN_VALUE){
			printf("\nPor favor ingrese un valor valido para A (Entre %d y %d): ", MIN_VALUE, MAX_VALUE);
			scanf("%f", &numeroA);
		}
		return numeroA;
	} else {
		printf("Ingrese un valor para B: ");
		scanf("%f", &numeroB);
		while(numeroB > MAX_VALUE || numeroB < MIN_VALUE){
			printf("\nPor favor ingrese un valor valido para B (Entre %d y %d): ", MIN_VALUE, MAX_VALUE);
			scanf("%f", &numeroB);
		}
		return numeroB;
	}
}
float CalcularSuma(float numeroUno, float numeroDos){
	return numeroUno+numeroDos;
}

float CalcularResta(float numeroUno, float numeroDos){
	return numeroUno-numeroDos;
}

float CalcularDivision(float numeroUno, float numeroDos){
	return (double)numeroUno / (double)numeroDos;
}

float CalcularMultiplicacion(float numeroUno, float numeroDos){
	return numeroUno*numeroDos;
}

int CalcularFactorial(float numero){
	int result = 1;
	int numeroAux = (int) numero;
	printf("\nSe calcula el factorial de %d", numeroAux);
	while(numeroAux > 1){
		result *= numeroAux;
		numeroAux--;
	}
	return result;
}

void InformarResultados(float numeroUno, float numeroDos, float resultadoSuma, float resultadoResta, float resultadoMultiplicacion, int resultadoFactorialN1, int resultadoFactorialN2, float resultadoDivision){
	printf("\nEl resultado de A+B es: %.2f", resultadoSuma);
	printf("\nEl resultado de A-B es: %.2f", resultadoResta);
	if(numeroUno == 0 || numeroDos == 0){
		printf("\nNo es posible dividir por 0 (cero).");
	} else{
		printf("\nEl resultado de A/B es: %.2f", resultadoDivision);
	}
	printf("\nEl factorial de A es: %d y El factorial de B es: %d", resultadoFactorialN1, resultadoFactorialN2);
}

int CalcularResultados(float numeroUno, float numeroDos, float* resultadoSuma, float* resultadoResta, float* resultadoMultiplicacion, int* resultadoFactorialN1, int* resultadoFactorialN2, float* resultadoDivision){
	char continua = 'n';
	if(numeroDos != 0 && numeroUno != 0){
		*resultadoDivision = CalcularDivision(numeroUno, numeroDos);
	}
	*resultadoSuma = CalcularSuma(numeroUno, numeroDos);
	*resultadoResta = CalcularResta(numeroUno, numeroDos);
	*resultadoMultiplicacion = CalcularMultiplicacion(numeroUno, numeroDos);
	if(numeroUno > 5){
		printf("\nEl primer numero es mayor a 5 y el sistema puede colapsar calculando factoreo.");
		printf("\nContinuar? ('s' o 'n'): ");
		fflush(stdin);
		scanf("%c", &continua);
		while(continua != 's' && continua != 'n'){
			printf("\nPor favor, ingresa Si ('s') o No: ('n'): ");
			fflush(stdin);
			scanf("%c", &continua);
		}
		if(continua == 's'){
			*resultadoFactorialN1 = CalcularFactorial(numeroUno);
		} else {
			*resultadoFactorialN1 = 0;
		}
	} else{
		if(numeroUno == 0){
			*resultadoFactorialN1 = 0;
		} else {
			*resultadoFactorialN1 = CalcularFactorial(numeroUno);
		}
	}
	if(numeroDos > 5){
		printf("\nEl segundo numero es mayor a 5 y el sistema puede colapsar calculando factoreo.");

		printf("\nContinuar? ('s' o 'n'): ");
		fflush(stdin);
		scanf("%c", &continua);
		while(continua != 's' && continua != 'n'){
			printf("\nPor favor, ingresa Si ('s') o No: ('n'): ");
			fflush(stdin);
			scanf("%c", &continua);
		}
		if(continua == 's'){
			*resultadoFactorialN2 = CalcularFactorial(numeroDos);
		} else {
			*resultadoFactorialN2 = 0;
		}
	} else{
		if(numeroDos == 0){
			*resultadoFactorialN2 = 0;
		} else {
			*resultadoFactorialN2 = CalcularFactorial(numeroDos);
		}
	}
	return 1;
}
