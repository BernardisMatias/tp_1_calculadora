#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(void) {
	setbuf(stdout, NULL);
	int opcion;
	float numeroA = NULL_VALUE, numeroB = NULL_VALUE, ingresoAyB = NO, resultadosCalculados = NO;
	float resultadoSuma, resultadoResta, resultadoMultiplicacion;
	int resultadoFactorialN1, resultadoFactorialN2;
	float resultadoDivision;
	do{
		MenuDeOpciones(numeroA, numeroB);
		scanf("%d", &opcion);
		switch(opcion){
			case 1:
				numeroA = CargarValor(opcion);
				break;
			case 2:
				numeroB = CargarValor(opcion);
				break;
			case 3:
				if(ingresoAyB == 0){
					printf("\nPor favor ingrese valores en A y B para poder hacer los calculos.");
					break;
				}
				CalcularResultados(numeroA, numeroB, &resultadoSuma, &resultadoResta, &resultadoMultiplicacion, &resultadoFactorialN1, &resultadoFactorialN2, &resultadoDivision);
				resultadosCalculados = SI;
				printf("\n\nCalculos realizados exitosamente.\n");
				break;
			case 4:
				if(ingresoAyB == 0){
					printf("\nPor favor ingrese valores en A y B para poder hacer los calculos.");
				} else if(resultadosCalculados == NO){
					printf("\nPara informar los resultados, primero debe calcular (Opcion 3).");
				} else {
					InformarResultados(numeroA, numeroB, resultadoSuma, resultadoResta, resultadoMultiplicacion, resultadoFactorialN1, resultadoFactorialN2, resultadoDivision);
				}
				break;
			case 5:
				printf("\nGracias, Adios!");
				break;
			default:
				printf("\nOpcion invalida. Reingrese opcion entre 1 y 5.");
				break;
		}
		if(numeroA != NULL_VALUE && numeroB != NULL_VALUE){
			ingresoAyB = SI;
		}
	}while(opcion != 5);
	return EXIT_SUCCESS;
}
