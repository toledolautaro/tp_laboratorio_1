/*
 * utn.h
 *
 *  Created on: 20 sep. 2021
 *      Author: LautaroToledo
 */

#ifndef UTN_H_
#define UTN_H_




/*DOCUMENTAR Proto */
int utn_getNumeroFlotante(float* pResultado,char* pMensaje, char* pMensajeError);

int menu(int* opcionSeleccionada);

int calcularSuma(float* pResultado, float operando1, float operando2);

int calcularResta(float* pResultado, float operando1, float operando2);

int calcularMultiplicacion(float* pResultado, float operando1, float operando2);

int calcularDivision(float* pResultado, int operando1, int operando2);

int calcularFactorial(float* pResultado, int operando);

#endif /* UTN_H_ */
