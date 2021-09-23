/*
 * utn.c
 *
 *  Created on: 20 sep. 2021
 *      Author: LautaroToledo
 */
#include <stdio.h>
#include <stdlib.h>


/*Documentar funcion dividir*/
int dividir(float* pResultado, int operando1, int operando2)
{
	int retorno = -1;
	if(pResultado != NULL && operando2 != 0)
	{
		(*pResultado) = operando1 / operando2;
		retorno = 0;
	}
	return retorno;
}



int menu(int* opcionSeleccionada)
{
	int opcionBuffer;
	int flagIngresoCorrectoFloat = -1;;
	float operandoUnoBuffer = 0;
	float operandoDosBuffer = 0;
	int retorno = -1;

	do
	{
		printf("---Menu calculadora seleccione una opcion del 1 al 5 \n\n");
		printf("1-Ingresar 1er operando (A=%f) \n", operandoUnoBuffer);
		printf("2-Ingresar 2do operando (B=%f) \n", operandoDosBuffer);
		printf("3-Calcular todas las operaciones \n");
		printf("\t a)-Calcular la suma (A+B) \n");
		printf("\t b)-Calcular la resta (A+B) \n");
		printf("\t c)-Calcular la multiplicacion (A*B) \n");
		printf("\t d)-Calcular la division (A/B) \n");
		printf("\t e)-Calcular el factorial (A!) (B!) \n");
		printf("4- Informar resultados \n");
		printf("5- Salir \n\n");

		printf("\n Seleccione del 1 al 5: ");
		fflush(stdin);

		if(scanf("%d", &opcionBuffer) == 1)
		{
			flagIngresoCorrectoFloat = 0;
		}



	}while( !(opcionBuffer >= 1 && opcionBuffer <= 5) || flagIngresoCorrectoFloat != 0 );

	(*opcionSeleccionada) = opcionBuffer;
	retorno = 0;

	return retorno;

}

