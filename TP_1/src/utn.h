/*
 * utn.h
 *
 *  Created on: 20 sep. 2021
 *      Author: LautaroToledo
 */

#ifndef UTN_H_
#define UTN_H_


/**
 * \brief función que se utiliza para pedir un numero de tipo float al usuario
 * \param pResultado -> puntero en donde se guardara el valor del float ingresado por el usuario
 * \param pMensaje -> mensaje que el usuario ve antes de ingresar el dato
 * \param pMensajeError -> mensaje de error que el usuario va a ver si no ingresa un dato valido
 * \return la función retorna 0 si todo salio bien y -1 si hubo un error y no pudo cargarse el puntero pResultado
 * */
int utn_getNumeroFlotante(float* pResultado,char* pMensaje, char* pMensajeError);

/**
 * \brief función que se utiliza para mostrar un menu de opciones correspondientes al programa
 * \param opcionSeleccionada -> puntero en donde se guardara el valor de la opcion seleccionada
 * \param operando1 -> parametro que utilizo para poder mostrar el valor ingresado del primerOperando en el menu
 * \param operando2 -> parametro que utilizo para poder mostrar el valor ingresado del segundoOperando en el menu
 * \return la función retorna 0 si todo salio bien y -1 si hubo un error y no pudo cargarse el puntero opcionSeleccionada
 * */
int menu(int* opcionSeleccionada, float operando1, float operando2);

/**
 * \brief función que se utiliza para calcular suma entre los operandos
 * \param pResultado -> puntero en donde se guardara el resultado de la suma
 * \param operando1 -> dato ingresado por el usuario que se utiliza para hacer la operación
 * \param operando2 -> dato ingresado por el usuario que se utiliza para hacer la operación
 * \return la función retorna 0 si todo salio bien y -1 si hubo un error y no pudo cargarse el puntero pResultado
 * */
int calcularSuma(float* pResultado, float operando1, float operando2);

/**
 * \brief función que se utiliza para calcular la resta entre los operandos
 * \param pResultado -> puntero en donde se guardara el resultado de la resta
 * \param operando1 -> dato ingresado por el usuario que se utiliza para hacer la operación
 * \param operando2 -> dato ingresado por el usuario que se utiliza para hacer la operación
 * \return la función retorna 0 si todo salio bien y -1 si hubo un error y no pudo cargarse el puntero pResultado
 * */
int calcularResta(float* pResultado, float operando1, float operando2);

/**
 * \brief función que se utiliza para calcular la multiplicación entre los operandos
 * \param pResultado -> puntero en donde se guardara el resultado de la multiplicación
 * \param operando1 -> dato ingresado por el usuario que se utiliza para hacer la operación
 * \param operando2 -> dato ingresado por el usuario que se utiliza para hacer la operación
 * \return la función retorna 0 si todo salio bien y -1 si hubo un error y no pudo cargarse el puntero pResultado
 * */
int calcularMultiplicacion(float* pResultado, float operando1, float operando2);

/**
 * \brief función que se utiliza para calcular la division entre los operandos
 * \param pResultado -> puntero en donde se guardara el resultado de la división
 * \param operando1 -> dato ingresado por el usuario que se utiliza para hacer la operación
 * \param operando2 -> dato ingresado por el usuario que se utiliza para hacer la operación
 * \return la función retorna 0 si todo salio bien y -1 si hubo un error y no pudo cargarse el puntero pResultado
 * */
int calcularDivision(float* pResultado, float operando1, float operando2);

/**
 * \brief función que se utiliza para calcular el factorial del numero ingresado
 * \param pResultado -> puntero en donde se guardara el resultado del factorial
 * \param operando -> dato ingresado por el usuario sobre el cual hara la operación la funcion
 * \return la función retorna 0 si todo salio bien y -1 si hubo un error y no pudo cargarse el puntero pResultado
 * */
int calcularFactorial(float* pResultado, float operando);

#endif /* UTN_H_ */
