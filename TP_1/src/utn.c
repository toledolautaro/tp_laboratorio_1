/*
 * utn.c
 *
 *  Created on: 20 sep. 2021
 *      Author: LautaroToledo
 */
#include <stdio.h>
#include <stdlib.h>



/**
 * \brief función que se utiliza para pedir un numero de tipo float al usuario
 * \param pResultado -> puntero en donde se guardara el valor del float ingresado por el usuario
 * \param pMensaje -> mensaje que el usuario ve antes de ingresar el dato
 * \param pMensajeError -> mensaje de error que el usuario va a ver si no ingresa un dato valido
 * \return la función retorna 0 si todo salio bien y -1 si hubo un error y no pudo cargarse el puntero pResultado
 * */
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

/**
 * \brief función que se utiliza para mostrar un menu de opciones correspondientes al programa
 * \param opcionSeleccionada -> puntero en donde se guardara el valor de la opcion seleccionada
 * \param operando1 -> parametro que utilizo para poder mostrar el valor ingresado del primerOperando en el menu
 * \param operando2 -> parametro que utilizo para poder mostrar el valor ingresado del segundoOperando en el menu
 * \return la función retorna 0 si todo salio bien y -1 si hubo un error y no pudo cargarse el puntero opcionSeleccionada
 * */
int menu(int* opcionSeleccionada, float operando1, float operando2)
{
	int opcionBuffer;
	int flagIngresoCorrectoFloat = -1;;
	int retorno = -1;

	do
	{
		printf("---Menu calculadora seleccione una opcion del 1 al 5 \n\n");
		printf("1-Ingresar 1er operando (A=%f) \n", operando1);
		printf("2-Ingresar 2do operando (B=%f) \n", operando2);
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

/**
 * \brief función que se utiliza para calcular suma entre los operandos
 * \param pResultado -> puntero en donde se guardara el resultado de la suma
 * \param operando1 -> dato ingresado por el usuario que se utiliza para hacer la operación
 * \param operando2 -> dato ingresado por el usuario que se utiliza para hacer la operación
 * \return la función retorna 0 si todo salio bien y -1 si hubo un error y no pudo cargarse el puntero pResultado
 * */
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

/**
 * \brief función que se utiliza para calcular la resta entre los operandos
 * \param pResultado -> puntero en donde se guardara el resultado de la resta
 * \param operando1 -> dato ingresado por el usuario que se utiliza para hacer la operación
 * \param operando2 -> dato ingresado por el usuario que se utiliza para hacer la operación
 * \return la función retorna 0 si todo salio bien y -1 si hubo un error y no pudo cargarse el puntero pResultado
 * */
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

/**
 * \brief función que se utiliza para calcular la multiplicación entre los operandos
 * \param pResultado -> puntero en donde se guardara el resultado de la multiplicación
 * \param operando1 -> dato ingresado por el usuario que se utiliza para hacer la operación
 * \param operando2 -> dato ingresado por el usuario que se utiliza para hacer la operación
 * \return la función retorna 0 si todo salio bien y -1 si hubo un error y no pudo cargarse el puntero pResultado
 * */
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

/**
 * \brief función que se utiliza para calcular la division entre los operandos
 * \param pResultado -> puntero en donde se guardara el resultado de la división
 * \param operando1 -> dato ingresado por el usuario que se utiliza para hacer la operación
 * \param operando2 -> dato ingresado por el usuario que se utiliza para hacer la operación
 * \return la función retorna 0 si todo salio bien y -1 si hubo un error y no pudo cargarse el puntero pResultado
 * */
int calcularDivision(float* pResultado, float operando1, float operando2)
{
	int retorno = -1;
	if(pResultado != NULL && operando2 != 0) //Si operando2 es igual a 0 existe un error ya que es una indeterminación
	{
		(*pResultado) = operando1 / operando2;
		retorno = 0;
	}
	return retorno;
}

/**
 * \brief función que se utiliza para calcular el factorial del numero ingresado
 * \param pResultado -> puntero en donde se guardara el resultado del factorial
 * \param operando -> dato ingresado por el usuario sobre el cual hara la operación la funcion
 * \return la función retorna 0 si todo salio bien y -1 si hubo un error y no pudo cargarse el puntero pResultado
 * */
int calcularFactorial(float* pResultado, float operando)
{
	int retorno = -1;
	float bufferFactorial;
	int i;

	if(pResultado != NULL && operando > 0)
	{
		for(i = 1; i<=operando; i++)
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

