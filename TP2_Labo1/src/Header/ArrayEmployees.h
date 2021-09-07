/*
 * Estructura_Empleados.h
 *
 *  Created on: 12 may. 2021
 *      Author: bripo
 */

#ifndef ARRAYEMPLOYEES_H_
#define ARRAYEMPLOYEES_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define max_caracter 51
#define FALSE -1
#define TRUE 0
#define E 1000

typedef struct
{
	int Id;
	char Name[max_caracter];
	char lastName[max_caracter];
	float Salary;
	int Sector;
	int IsEmpty;


}eEmployee;

/**
 * @fn void InitEmployees(eEmployee[], int)
 * @brief --> Inicializa las estructuras para poder ingresar datos, deja el estado de la variable isEmpty en VACIO.
 *
 * @param listaEmployee --> Estructura con listado de empleados.
 * @param tam --> Tamanio de la estructura.
 */
void InitEmployees(eEmployee listaEmployee[], int tam);


/**
 * @fn int FindFreeIndex(eEmployee[], int)
 * @brief --> Detecta si se encuentra algun espacio libre para poder ingresar datos, en caso de que lo haga, retorna el indice del array disponible.
 *
 * @param listaEmployee --> Estructura con listados de empleados.
 * @param tam --> Tamanio de la estructura.
 * @return --> retorna el indice si se encuentra disponible (VACIO) o -1 en caso de que no exista lugar disponible (OCUPADO).
 */
int FindFreeIndex(eEmployee listaEmployee[], int tam);


/**
 * @fn int findEmployeeById(eEmployee[], int, int)
 * @brief --> La funcion se encarga de recibir el array de estructuras, el tamanio y un dato(Id), verifica si este coincide
 * con alguno que se encuentre guardado en la estructura, en caso de encontrarlo el index que corresponda, lo retorna o en caso contrario devuelve -1.
 *
 *
 * @param listaEmployee --> Estructura con listados de empleados.
 * @param tam --> Tamanio de la estructura.
 * @param datoId --> Dato a verificar.
 * @return Posicion exacta en donde se encuentra el datoId, de lo contrario retorna -1.
 */
int FindEmployeeById(eEmployee listaEmployee[], int tam, int datoId);


/**
 * @fn void RemoveEmployee(eEmployee[], int, int, char[])
 * @brief --> Recibe un array de estructuras, el tamanio, el indice y un mensaje. Recorre y produce una baja logica a un determinado array de estructura,
 * gracias al dato que recibe (indice) cambia de estado la variabla isEmpty de la estructura.
 *
 * @param listaEmployee --> Estructura con listados de empleados.
 * @param tam --> Tamanio de la estructura.
 * @param indice --> Dato de la posicion a verificar.
 * @param mensaje --> Mensaje.
 */
void RemoveEmployee(eEmployee listaEmployee[], int tam, int indice, char mensaje[]);


/**
 * @fn void AddOneEmployee(eEmployee[], int, int)
 * @brief --> Permite el acceso a un indice junto a la funcion
 * FindFreeIndex (esta verifica espacio disponible), el cual se encuentre disponible para su carga de datos,
 * envia los datos listaEmployee, tamEmployee, e IdIncrementalEmployee, a la funcion
 * PedirdatosTrabajo.
 *
 * @param listaEmployee --> Estructura con listados de empleados.
 * @param tamEmployee --> Tamanio de la estructura.
 * @param IdIncrementalEmployee --> id autogenerada.
 */
void AddOneEmployee(eEmployee listaEmployee[], int tamEmployee, int IdIncrementalEmployee);


/**
 * @fn eEmployee AddEmployee(int)
 * @brief --> Permite el ingreso de datos de un empleado, utiliza las funciones de la biblioteca Generic_functions
 * para la toma de datos, recibe como parametro la id generada de forma automatica y cambia la variable de control
 * IsEmpty a False (usuario cargado).
 *
 * @param IdIncrementalEmployee --> id autogenerada.
 * @return --> Retorno de la estructura cargada con los datos.
 */
eEmployee AddEmployee(int IdIncrementalEmployee);


/**
 * @fn void PrintEmployees(eEmployee[], int)
 * @brief --> Muestra los empleados que tengan como condicion a la variable de control IsEmpty en estado False,
 * recibe como parametros una lista de estructuras y el tamanio de esta.
 *
 * @param listaEmployee --> Estructura con listados de empleados.
 * @param tamEmployee --> Tamanio de la estructura.
 */
void PrintEmployees(eEmployee listaEmployee[], int tamEmployee);


/**
 * @fn void ModifyAEmployee(eEmployee[], int)
 * @brief --> Permite modificar un empleado de la lista, mediante el ingreso de una id y junto con la funcion FindEmployeeById
 * muestra una lista de empleados, PrintEmployees, y habilita al usuario a ingresar alguna de las que se muestran en pantalla.
 * En caso de entrontrar el id, permite la modificacion del nombre, apellido, salario y sector, en caso de no encontrar el id ingresado
 * muestra un mensaje de error
 *
 * @param listaEmployee --> Estructura con listados de empleados.
 * @param tamEmployee -->Tamanio de la estructura.
 */
void ModifyAEmployee(eEmployee listaEmployee[], int tamEmployee);


/**
 * @fn void DeleteEmpleoyee(eEmployee[], int)
 * @brief --> Permite el borrado logico de un empleado, muestra la lista de usuarios igresados (PrintEmployees) y junto a la funcion RemoveEmployee, permite el ingreso de datos (id)
 * y con la ayuda de la funcion FindEmployeeById detecta si la id ingresada corresponde a alguna ya generada, en caso de serlo
 * procede al borrado logico con la funcion RemoveEmployee, sin antes preguntar si desea continuar.
 *
 * @param listaEmployee --> Estructura con listados de empleados.
 * @param tamEmployee --> Tamanio de la estructura.
 */
void DeleteEmpleoyee(eEmployee listaEmployee[], int tamEmployee);


/**
 * @fn void OrderEmployees_Salary_Sector(eEmployee[], int, int)
 * @brief --> Permite el ordenamiento, con el metodo del burbujeo, de los empleados ingresados usando como parametro para ordenar, los apellidos
 * y en caso de coincidir el sector de los empleados, junto a la funcion PrintEmployees muestra la lista ya ordenada.
 *
 * @param listaEmployee --> Estructura con listados de empleados.
 * @param tamEmployee --> Tamanio de la estructura.
 * @param respuesta --> Criterio de ordenamiento.
 */
void OrderEmployees_Salary_Sector(eEmployee listaEmployee[], int tamEmployee, int respuesta);

/**
 * @fn int MenuEmployee(eEmployee[], int)
 * @brief --> Submenu que permite al usuario interactuar y darle a elegir entre ordenar a los empleados por el salario y sector), o
 * mostrar los empleados que superen (ShowAverageEmployess) el salario minimo, el promedio (AverageSalarie) de salarios y la suma (SumSalaries) de estos.
 *
 * @param listaEmployee --> Estructura con listados de empleados.
 * @param tamEmployee --> Tamanio de la estructura.
 * @return --> Retorno de la opcion ingresada por el usuario, -1 si es incorrecta.
 */
int MenuEmployee(eEmployee listaEmployee[], int tamEmployee);


/**
 * @fn float SumSalaries(eEmployee[], int)
 * @brief --> Permite la suma de los salarios de los empleados utilizando la variable de control IsEmpty en estado False,
 * retornando la suma total de estos.
 *
 * @param listaEmployee --> Estructura con listados de empleados.
 * @param tamEmployee --> Tamanio de la estructura.
 * @return --> retorno de la suma de los salarios.
 */
float SumSalaries(eEmployee listaEmployee[], int tamEmployee);


/**
 * @fn float AverageSalarie(eEmployee[], int)
 * @brief --> Permite calcular el promedio de salarios de los empleados utilizando la variable de control IsEmpty en estado False,
 * retornando el promedio de estos.
 *
 * @param listaEmployee --> Estructura con listados de empleados.
 * @param tamEmployee --> Tamanio de la estructura.
 * @return --> Promedio de salarios de los empleados.
 */
float AverageSalarie(eEmployee listaEmployee[], int tamEmployee);


/**
 * @fn int CountEmployees(eEmployee[], int)
 * @brief --> Permite contar a todos los empleados que presenten la variable de control IsEmpty en estado False,
 * retorna la cantidad de empleados contados.
 *
 * @param listaEmployee --> Estructura con listados de empleados.
 * @param tamEmployee --> Tamanio de la estructura.
 * @return --> Cantidad de empleados que han sido contados.
 */
int CountEmployees(eEmployee listaEmployee[], int tamEmployee);


/**
 * @fn int ShowAverageEmployess(eEmployee[], int)
 * @brief --> Permite identificar a los empleados que tengan un mayor salario al promedio, junto a la variable de control IsEmpty en estado False,
 * retorna la cantidad de empleados contados.
 *
 * @param listaEmployee --> Estructura con listados de empleados.
 * @param tamEmployee --> Tamanio de la estructura.
 * @return --> Cantidad de empleados que superen el salario promedio.
 */
int ShowAverageEmployess(eEmployee listaEmployee[], int tamEmployee);

#endif /* ARRAYEMPLOYEES_H_ */
