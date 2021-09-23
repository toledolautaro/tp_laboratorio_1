/*
 ============================================================================
 Name        : calculadora.c
 Author      : github -> @toledolautaro
 Version     : v1
 Description : Trabajo Practico N° 1
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"


int main(void) {
	setbuf(stdout, NULL);

	int opcionSeleccionada;
	int opcion;
	int respuestaPrimerOperando;
	int respuestaSegundoOperando;
	int respuestaSuma;
	int respuestaResta;
	int respuestaMultiplicacion;
	int respuestaDivision;
	int respuestaFactorialPrimerOperando;
	int respuestaFactorialSegundoOperando;
	int flagIngresoPrimerOperando = -1;
	int flagIngresoSegundoOperando = -1;
	float primerOperando;
	float segundoOperando;
	float resultadoSuma;
	float resultadoResta;
	float resultadoMultiplicacion;
	float resultadoDivision;
	float resultadoFactorialPrimerOperando;
	float resultadoFactorialSegundoOperando;


	opcion = menu(&opcionSeleccionada);
	if(opcion == 0)
	{
		switch(opcionSeleccionada)
		{

			case 1:
			{
				do
				{
					respuestaPrimerOperando = utn_getNumeroFlotante(&primerOperando, "Ingrese 1er operando: ", "Error, eso no es un numero");

				}while(respuestaPrimerOperando == -1);

				flagIngresoPrimerOperando = 0; //Operando uno cargado correctamente

				printf("Ingreso correcto: \n"); //borrar esto
				printf("usted ingreso: %f", primerOperando); //borrar esto
				break;
			}

			case 2:
			{
				do
				{
					respuestaSegundoOperando = utn_getNumeroFlotante(&segundoOperando, "Ingrese 2do operando: ", "Error eso no es un numero");

				}while(respuestaSegundoOperando == -1);

				flagIngresoSegundoOperando = 0; //OPERANDO 2 CARGADO OK
				printf("Ingreso correcto: \n"); //borrar esto
				printf("usted ingreso: %f", segundoOperando); //borrar esto
				break;
			}
			case 3:
			{
				if(flagIngresoPrimerOperando == -1)
				{
					printf("El primer operando no está cargado, porfavor ingrese un numero \n");
					while(flagIngresoPrimerOperando == -1)
					{
						respuestaPrimerOperando = utn_getNumeroFlotante(&primerOperando, "Ingrese 1er operando: ", "Error, eso no es un numero");
						flagIngresoPrimerOperando = 0;
					}
				}
				if(flagIngresoSegundoOperando == -1)
				{
					printf("El segundo operando no está cargado, porfavor ingrese un numero \n");
					while(flagIngresoPrimerOperando == -1)
					{
						respuestaSegundoOperando = utn_getNumeroFlotante(&primerOperando, "Ingrese 2do operando: ", "Error, eso no es un numero");
						flagIngresoSegundoOperando = 0;
					}
				}
				printf("CALCULANDO RESULTADOS....... \n\n");
				respuestaSuma = calcularSuma(&resultadoSuma, primerOperando, segundoOperando);
				respuestaResta = calcularResta(&resultadoResta, primerOperando, segundoOperando);
				respuestaMultiplicacion = calcularMultiplicacion(&resultadoMultiplicacion, primerOperando, segundoOperando);
				respuestaDivision = calcularDivision(&resultadoDivision, primerOperando, segundoOperando);
				respuestaFactorialPrimerOperando = calcularFactorial(&resultadoFactorialPrimerOperando, primerOperando);
				respuestaFactorialSegundoOperando = calcularFactorial(&resultadoFactorialSegundoOperando, segundoOperando);
				break;
			}
			case 4:
			{
				printf("INFORMANDO RESULTADOS: \n\n");
				break;
			}


			default:
				break;
		}
	}
	else
	{
		printf("Error");
	}


	return EXIT_SUCCESS;
}
