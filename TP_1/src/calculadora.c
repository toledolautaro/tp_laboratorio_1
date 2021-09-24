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

	int opcionSeleccionada = 0;
	int opcion = 0;
	int respuestaPrimerOperando = 0;
	int respuestaSegundoOperando = 0;
	int respuestaSuma = 0;
	int respuestaResta = 0;
	int respuestaMultiplicacion = 0;
	int respuestaDivision = 0;
	int respuestaFactorialPrimerOperando = 0;
	int respuestaFactorialSegundoOperando = 0;
	int flagIngresoPrimerOperando = -1;
	int flagIngresoSegundoOperando = -1;
	float primerOperando = 0;
	float segundoOperando = 0;
	float resultadoSuma = 0;
	float resultadoResta = 0;
	float resultadoMultiplicacion = 0;
	float resultadoDivision = 0;
	float resultadoFactorialPrimerOperando = 0;
	float resultadoFactorialSegundoOperando = 0;

	do
	{
		opcion = menu(&opcionSeleccionada, primerOperando, segundoOperando);
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
					break;
				}

				case 2:
				{
					do
					{
						respuestaSegundoOperando = utn_getNumeroFlotante(&segundoOperando, "Ingrese 2do operando: ", "Error eso no es un numero");

					}while(respuestaSegundoOperando == -1);

					flagIngresoSegundoOperando = 0; //OPERANDO 2 CARGADO OK
					break;
				}
				case 3:
				{
					if(flagIngresoPrimerOperando == -1)
					{
						printf("El primer operando no está cargado, porfavor ingrese un numero \n");
						while(flagIngresoPrimerOperando == -1)
						{
							respuestaPrimerOperando = utn_getNumeroFlotante(&primerOperando, "Ingrese 1er operando: ", "Error, eso no es un numero \n");
							flagIngresoPrimerOperando = 0;
						}
					}
					if(flagIngresoSegundoOperando == -1)
					{
						printf("El segundo operando no está cargado, porfavor ingrese un numero \n");
						while(flagIngresoPrimerOperando == -1)
						{
							respuestaSegundoOperando = utn_getNumeroFlotante(&primerOperando, "Ingrese 2do operando: ", "Error, eso no es un numero \n");
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
					system("pause");
					break;
				}
				case 4:
				{
					printf("INFORMANDO RESULTADOS: \n\n");

					if(respuestaSuma == 0)
					{
						printf("El resultado de la suma de %.2f + %.2f es: %.2f \n", primerOperando, segundoOperando, resultadoSuma);
					}
					else
					{
						printf("Hubo un error al calcular la suma \n");
					}

					if(respuestaResta == 0)
					{
						printf("El resultado de la resta de %.2f - %.2f es: %.2f \n", primerOperando, segundoOperando, resultadoResta);
					}
					else
					{
						printf("Hubo un error al calcular la resta \n");
					}
					if(respuestaMultiplicacion == 0)
					{
						printf("El resultado de la multiplicación de %.2f * %.2f es: %.2f \n", primerOperando, segundoOperando, resultadoMultiplicacion);
					}
					else
					{
						printf("Hubo un error al calcular la multiplicación \n");
					}
					if(respuestaDivision == 0)
					{
						printf("El resultado de la división de %.2f / %.2f es: %.2f \n", primerOperando, segundoOperando, resultadoDivision);
					}
					else
					{
						printf("Error, NO es posible dividir por 0 \n");
					}
					if(respuestaFactorialPrimerOperando == 0)
					{
						printf("El factorial de %.2f! es: %.2f \n", primerOperando,resultadoFactorialPrimerOperando);
					}
					else
					{
						printf("No se puede hacer factoriales de numeros negativos \n");
					}
					if(respuestaFactorialSegundoOperando == 0)
					{
						printf("El factorial de %.2f! es: %.2f \n", segundoOperando, resultadoFactorialSegundoOperando);
					}
					else
					{
						printf("No se puede hacer factoriales de numeros negativos \n");
					}
					system("pause");
					break;
				}

				case 5:
				{
					printf("PROGRAMA FINALIZADO");
					break;
				}
				default:
					printf("Opcion no valida \n");
					break;
			}
		}
		printf("\n\n\n\n\n");
	}while(opcionSeleccionada != 5);


	return EXIT_SUCCESS;
}
