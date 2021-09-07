/*
 * TP_laboratorio_1.h
 *
 *  Created on: 26 mar. 2021
 *      Author: Cespedes Braian Jesus 1F
 */

#ifndef TP_LABORATORIO_1_H_
#define TP_LABORATORIO_1_H_

/**
 * @fn void MenuOpciones(char[], char[], char[], char[], char[], char[])
 *
 * @brief --> Recibe varias cadenas de caracteres "mensajes" introducidos en el main para poder reproducir el menu de opciones.
 *
 * @param mensaje1 --> Primer mensaje a mostrar.
 * @param mensaje2 --> Segundo mensaje a mostrar.
 * @param mensaje3 --> Tercer mensaje a mostrar.
 * @param mensaje4 --> Cuarto mensaje a mostrar.
 * @param mensaje5 --> Quinto mensaje a mostrar.
 * @param mensaje6 --> Sexto mensaje a mostrar.
 */

void MenuOpciones(char mensaje1[], char mensaje2[], char mensaje3[], char mensaje4[], char mensaje5[], char mensaje6[]);

//------------------------------------------////////////////////////////////////-------------------------------------------------------------------------------INGRESO DE DATOS//
/**
 * @fn int GetStrings(char[], char[])
 *
 * @brief --> Recibe dos cadenas de caracteres "mensajes", solicita al usuario ingresar un dato numerico y lo guarda en un array de caracteres (Dato1), llama a la función ValidarFloat, la
 * cual verifica si el dato ingresado corresponde a un numero, en caso contrario muestra un mensaje de eerror y solicita denuevo su ingreso. En caso de que ValidarFloat verifique
 * si el dato es un numero, entra a una condición, la cual compara y valida junto con ValidarInt si el dato ingresado si o si es flotante o entero. Cualquiera sea el caso se, carga
 * la variable global DatoFloatuno o DatoIntuno gracias a las funciones TurnIntoFloat y TurnIntoInt, cambia el valor de las banderas flagFloat1 y flagInt1 dependiendo del caso,
 * retorna 1 cuando los datos se han cargado con exito.
 *
 * @param message --> Mensaje solicitando el ingreso de datos.
 * @param messageError --> Mensaje de error mostrado en caso de que el dato ingresado no corresponda a un numero.
 *
 * @return --> Se retorna 1 cuando el numero ha sido cargado.
 */

int GetStrings(char message[], char messageError[]);

/**
 * @fn int GetStrings2(char[], char[])
 *
 * @brief --> Recibe dos cadenas de caracteres "mensajes", solicita al usuario ingresar un dato numerico y lo guarda en un array de caracteres (Dato2), llama a la función ValidarFloat, la
 * cual verifica si el dato ingresado corresponde a un numero, en caso contrario muestra un mensaje de eerror y solicita denuevo su ingreso. En caso de que ValidarFloat verifique
 * si el dato es un numero, entra a una condición, la cual compara y valida junto con ValidarInt si el dato ingresado si o si es flotante o entero. Cualquiera sea el caso se, carga
 * la variable global DatoFloatdos o DatoIntdos gracias a las funciones TurnIntoFloat y TurnIntoInt, cambia el valor de las banderas flagFloat2 y flagInt2 dependiendo del caso,
 * retorna 1 cuando los datos se han cargado con exito.
 *
 * @param message2 --> Mensaje solicitando el ingreso de datos.
 * @param messageError2 --> Mensaje de error mostrado en caso de que el dato ingresado no corresponda a un numero.
 *
 * @return --> Se retorna 1 cuando el numero ha sido cargado.
 */

int GetStrings2(char message2[], char messageError2[]);

//------------------------------------------////////////////////////////////////-------------------------------------------------------------------------------VALIDACION DE DATOS//
/**
 * @fn int ValidarInt(char[])
 *
 * @brief  --> Recibe una cadena de caracteres enviado por la funcion GetStrings o GetStrings2, verifica si los datos corresponden a un numero entero y retorna 1 en caso de que lo sea,
 * si el dato no es un entero retorna 0.
 *
 * @param numero --> Dato correspondiente a la cadena de caracteres a validar.
 *
 * @return --> retorno 1 si la validación fue exitosa o 0 en caso contrario.
 */

int ValidarInt(char numero[]);

/**
 * @fn int ValidarFloat(char[])
 *
 * @brief --> Recibe una cadena de caracteres enviado por la funcion GetStrings o GetStrings2, verifica si los datos corresponden a un numero flotante y retorna 1 en caso de que lo sea,
 * si el dato no es un flotante retorna 0.
 *
 * @param validfloat --> Corresponde a la cadena de caracteres a validar.
 *
 * @return --> retorno 1 si la validación fue exitosa o 0 en caso contrario.
 */

int ValidarFloat(char validfloat[]);

//------------------------------------------////////////////////////////////////-------------------------------------------------------------------------------CONVERSION DE DATOS//
/**
 * @fn int TurnIntoInt(char[])
 *
 * @brief --> Recibe el array de caracteres de las funciones GetStrings o GetStrings2 y los convierte a un numero entero, para poder operar, el cual retorna mas tarde.
 *
 * @param stringdata --> Cadena a convertir.
 *
 * @return --> Retorno del numero entero convertido.
 */

int TurnIntoInt(char stringdata[]);

/**
 * @fn float TurnIntoFloat(char[])
 *
 * @brief --> Recibe el array de caracteres de las funciones GetStrings o GetStrings2 y los convierte a un numero flotante, para poder operar, el cual retorna mas tarde.
 *
 * @param stringdata --> Cadena a convertir.
 *
 * @return --> Retorno del numero flotante convertido.
 */

float TurnIntoFloat(char stringdata[]);
//------------------------------------------////////////////////////////////////-------------------------------------------------------------------------------SUMA//
/**
 * @fn float SumaFloat(float, float)
 *
 * @brief --> Recibe dos numeros flotantes como parametros, los suma y devuelve el resultado como parametro (flotante).
 *
 * @param PrimernumeroSuma --> Primer numero flotante a operar.
 * @param SegundonumeroSuma --> Segundo numero flotante a operar.
 *
 * @return --> El resultado (flotante) de la suma de ambos numeros.
 */

float SumaFloat(float PrimernumeroSuma, float SegundonumeroSuma);

/**
 * @fn float SumaFloatInt(float, int)
 *
 * @brief --> Recibe dos numeros, un numero flotante y otro entero como parametros, los suma y devuelve el resultado como parametro (flotante).
 *
 * @param PrimernumeroSuma --> Primer numero flotante a operar.
 * @param SegundonumeroSuma --> Segundo numero, en este caso entero, a operar.
 *
 * @return --> El resultado (flotante) de la suma de ambos numeros.
 */

float SumaFloatInt(float PrimernumeroSuma, int SegundonumeroSuma);

/**
 * @fn int SumaInt(int, int)
 *
 * @brief --> Recibe dos numeros enteros como parametros, los suma y devuelve el resultado como parametro (entero).
 *
 * @param PrimernumeroSuma --> Primer numero entero a operar.
 * @param SegundonumeroSuma --> Segundo numero entero a operar.
 *
 * @return --> El resultado (entero) de la suma de ambos numeros.
 */

int SumaInt(int PrimernumeroSuma, int SegundonumeroSuma);

//------------------------------------------////////////////////////////////////-------------------------------------------------------------------------------RESTA//
/**
 * @fn float RestaFloat(float, float)
 *
 * @brief --> Recibe dos numeros flotantes como parametros, los resta y devuelve el resultado como parametro (flotante).
 *
 * @param PrimernumeroResta --> Primer numero flotante a operar.
 * @param SegundonumeroResta --> Segundo numero flotante a operar.
 *
 * @return El resultado (flotante) de la resta de ambos numeros.
 */

float RestaFloat(float PrimernumeroResta, float SegundonumeroResta);

/**
 * @fn float RestaFloatInt(float, int)
 *
 * @brief --> Recibe dos numeros, un numero flotante y otro entero como parametros, los resta y devuelve el resultado como parametro (flotante).
 *
 * @param PrimernumeroResta --> Primer numero flotante a operar.
 * @param SegundonumeroResta --> Segundo numero, en este caso entero, a operar.
 *
 * @return El resultado (flotante) de la resta de ambos numeros.
 */

float RestaFloatInt(float PrimernumeroResta, int SegundonumeroResta);

/**
 * @fn float RestaIntFloat(int, float)
 *
 * @brief --> Recibe dos numeros, un numero entero y otro flotante como parametros, los resta y devuelve el resultado como parametro (flotante).
 *
 * @param PrimernumeroResta --> Primer numero entero a operar.
 * @param SegundonumeroResta --> Segundo numero, en este caso flotante, a operar.
 *
 *
 * @return El resultado (flotante) de la resta de ambos numeros.
 */

float RestaIntFloat(int PrimernumeroResta, float SegundonumeroResta);

/**
 * @fn int RestaInt(int, int)
 *
 * @brief --> Recibe dos numeros enteros como parametros, los resta y devuelve el resultado como parametro (entero).
 *
 * @param PrimernumeroResta --> Primer numero entero a operar.
 * @param SegundonumeroResta --> Segundo numero entero a operar.
 *
 * @return El resultado (entero) de la resta de ambos numeros.
 */

int RestaInt(int PrimernumeroResta, int SegundonumeroResta);

//------------------------------------------////////////////////////////////////-------------------------------------------------------------------------------DIVISION//
/**
 * @fn float DivisionFloat(float, float)
 *
 * @brief --> Recibe dos numeros flotantes como parametros, verifica que SegundonumeroDivision sea distinto de cero, en caso de que lo sea, devuelve 0 de lo contrario
 * los divide y devuelve el resultado como parametro (flotante).
 *
 * @param PrimernumeroDivision --> Primer numero flotante a operar.
 * @param SegundonumeroDivision --> Segundo numero flotante a operar.
 *
 * @return --> El resultado (flotante) de la division de ambos numeros, en caso de que se detecte un cero en el segundo paramaetro devuelve 0.
 */

float DivisionFloat(float PrimernumeroDivision, float SegundonumeroDivision);

/**
 * @fn float DivisionFloatInt(float, int)
 *
 * @brief --> Recibe dos numeros, un numero flotante y otro entero como parametros, verifica que SegundonumeroDivision sea distinto de cero, en caso de que lo sea devuelve 0, de lo contrario
 * los divide y devuelve el resultado como parametro (flotante).
 *
 * @param PrimernumeroDivision --> Primer numero flotante a operar.
 * @param SegundonumeroDivision --> Segundo numero, en este caso entero a operar.
 *
 * @return --> El resultado (flotante) de la division de ambos numeros, en caso de que se detecte un cero en el segundo paramaetro devuelve 0.
 */

float DivisionFloatInt(float PrimernumeroDivision, int SegundonumeroDivision);

/**
 * @fn float DivisionInt(int, int)
 *
 * @brief --> Recibe dos numeros enteros, verifica que SegundonumeroDivision sea distinto de cero, en caso de que lo sea devuelve 0, de lo contrario
 * los divide y devuelve el resultado como parametro (flotante).
 *
 * @param PrimernumeroDivision --> Primer numero entero a operar.
 * @param SegundonumeroDivision --> Segundo numero entero a operar.
 *
 * @return --> El resultado (flotante) de la division de ambos numeros, en caso de que se detecte un cero en el segundo paramaetro devuelve 0.
 */

float DivisionInt(int PrimernumeroDivision, int SegundonumeroDivision);

/**
 * @fn float DivisionIntFloat(int, float)
 *
 * @brief --> Recibe dos numeros, un numero entero y otro flotante como parametros, verifica que SegundonumeroDivision sea distinto de cero, en caso de que lo sea devuelve 0, de lo contrario
 * los divide y devuelve el resultado como parametro (flotante).
 *
 * @param PrimernumeroDivision --> Primer numero entero a operar.
 * @param SegundonumeroDivision --> Segundo numero, en este caso flotante, a operar.
 *
 * @return --> El resultado (flotante) de la division de ambos numeros, en caso de que se detecte un cero en el segundo paramaetro devuelve 0.
 */

float DivisionIntFloat(int PrimernumeroDivision, float SegundonumeroDivision);

//------------------------------------------////////////////////////////////////-------------------------------------------------------------------------------MULTIPLICACION//
/**
 * @fn float MultiplicacionFloat(float, float)
 *
 * @brief --> Recibe dos numeros flotantes, los multiplica y devuelve el resultado como parametro (flotante).
 *
 * @param PrimernumeroMultiplicacion --> Primer numero flotante a operar.
 * @param SegundonumeroMultiplicacion --> Segundo numero flotante a operar.
 *
 * @return --> El resultado (flotante) de la multiplicacion de ambos numeros.
 */

float MultiplicacionFloat(float PrimernumeroMultiplicacion, float SegundonumeroMultiplicacion);

/**
 * @fn float MultiplicacionFloatInt(float, int)
 *
 * @brief --> Recibe dos numeros, un numero flotante y otro entero como parametro, los multiplica y devuelve el resultado como parametro (flotante).
 *
 * @param PrimernumeroMultiplicacion --> Primer numero flotante a operar.
 * @param SegundonumeroMultiplicacion --> Segundo numero, en este caso entero, a operar.
 *
 * @return --> El resultado (flotante) de la multiplicacion de ambos numeros.
 */

float MultiplicacionFloatInt(float PrimernumeroMultiplicacion, int SegundonumeroMultiplicacion);

/**
 * @fn int MultiplicacionInt(int, int)
 *
 * @brief --> Recibe dos enteros como parametro, los multiplica y devuelve el resultado como parametro (entero).
 *
 * @param PrimernumeroMultiplicacion --> Primer numero entero a operar.
 * @param SegundonumeroMultiplicacion --> Segundo numero entero a operar.
 *
 * @return --> El resultado (entero) de la multiplicacion de ambos numeros.
 */

int MultiplicacionInt(int PrimernumeroMultiplicacion, int SegundonumeroMultiplicacion);

//------------------------------------------////////////////////////////////////-------------------------------------------------------------------------------FACTORIAL//
/**
 * @fn long Factorial(int)
 *
 * @brief --> Recibe un parametro entero para calcular el factorial, en caso de que este sea un numero negativo devuelve -1, de lo contrario devuelve el factorial de dicho numero.
 *
 * @param PrimerFactorial --> Numero entero listo para calcular el factorial.
 *
 * @return --> El factorial del numero recibido, o -1 en caso de que este sea negativo.
 */

long Factorial(int PrimerFactorial);

#endif /* TP_LABORATORIO_1_H_ */
