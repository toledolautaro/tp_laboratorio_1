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

	opcion = menu(&opcionSeleccionada);
	if(opcion == 0)
	{
		printf("Usted seleccionó: %d", opcionSeleccionada);
	}
	else
	{
		printf("Error");
	}


	return EXIT_SUCCESS;
}
