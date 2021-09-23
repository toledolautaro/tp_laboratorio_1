/*
 * utn.c
 *
 *  Created on: 20 sep. 2021
 *      Author: LautaroToledo
 */
#include <stdio.h>
#include <stdlib.h>




int utn_getNumeroFlotante(float* pResultado,char* pMensaje, char* pMensajeError)
{
	int retorno = -1;
	int respuestaScan;
	float floatBuffer;

	printf("%s", pMensaje);
	respuestaScan = scanf("%f", &floatBuffer);

	while(respuestaScan == 0)
	{
		printf("%s", pMensajeError);
		scanf("%f", &floatBuffer);
	}
	retorno = 0;
	(*pResultado) = floatBuffer;

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

int calcularSuma(float* pResultado, float operando1, float operando2)
{
	int retorno = -1;
	if(pResultado != NULL)
	{
		(*pResultado) = operando1 + operando2;
		retorno = 0;
	}
	return retorno;
}

int calcularResta(float* pResultado, float operando1, float operando2)
{
	int retorno = -1;
	if(pResultado != NULL)
	{
		(*pResultado) = operando1 - operando2;
		retorno = 0;
	}

	return retorno;
}

int calcularMultiplicacion(float* pResultado, float operando1, float operando2)
{
	int retorno = -1;
	if(pResultado != NULL)
	{
		(*pResultado) = operando1 * operando2;
		retorno = 0;
	}

	return retorno;
}

/*Documentar funcion dividir*/
int calcularDivision(float* pResultado, int operando1, int operando2)
{
	int retorno = -1;
	if(pResultado != NULL && operando2 != 0)
	{
		(*pResultado) = operando1 / operando2;
		retorno = 0;
	}
	return retorno;
}

int calcularFactorial(float* pResultado, int operando)
{
	int retorno = -1;
	float bufferFactorial;
	int i;

	if(pResultado != NULL && operando > 0)
	{
		for(i = 0; i<operando; i++)
		{
			bufferFactorial = bufferFactorial * i;
		}
		retorno = 0;
		(*pResultado) = bufferFactorial;
	}
	if(operando == 0)
	{
		retorno = 0;
		(*pResultado) = 1;
	}

	return retorno;

}

