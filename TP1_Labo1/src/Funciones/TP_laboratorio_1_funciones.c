/*
 * Ejempli.calculadoraF.c
 *
 *  Created on: 7 abr. 2021
 *      Author: Cespedes Braian Jesus 1F
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "TP_laboratorio_1.h"

#define buffer_size 100
int DatoIntuno = 0;
int DatoIntdos = 0;
float DatoFloatuno = 0;
float DatoFloatdos = 0;
int flagInt1 = 0;
int flagInt2 = 0;
int flagFloat1 = 0;
int flagFloat2 = 0;

void MenuOpciones(char mensaje1[], char mensaje2[], char mensaje3[], char mensaje4[], char mensaje5[], char mensaje6[])
{
	int primerflag = 0;
	int segundoflag = 0;
	int seguir;
	int SumaFinalInt;
	float SumaFinalFloat;
	int RestaFinalInt;
	float RestaFinalFloat;
	float DivisionFinalInt;
	float DivisionFinalFloat;
	int MultiplicacionFinalInt;
	float MultiplicacionFinalFloat;
	long PrimerFactorial;
	long SegundoFactorial;

	do
	{
		printf("%s", mensaje1);

			if(DatoIntuno != 0)
			{
			 printf("%s (%d)\n", mensaje2, DatoIntuno);

			}
			else
				{
				 printf("%s (%.2f)\n", mensaje2, DatoFloatuno);

				 }

			if(DatoIntdos != 0)
			{
			 printf("%s (%d)\n", mensaje3, DatoIntdos);

			}
			else
				{
				 printf("%s (%.2f)\n", mensaje3, DatoFloatdos);

				 }

		printf("%s", mensaje4);
		printf("%s", mensaje5);
		printf("%s", mensaje6);
		scanf("%d", &seguir);

		switch(seguir)
		{

		case 1:

			DatoIntuno = 0;
			DatoFloatuno = 0;
			flagInt1 = 0;
			flagFloat1= 0;

			primerflag = GetStrings("Ingrese un numero (X): ","\nUsted no ha ingresado un numero:");
			system("pause");
			system("cls");
			break;

		case 2:

			if(primerflag!=0)
				{
					DatoIntdos = 0;
					DatoFloatdos = 0;
					flagInt2 = 0;
					flagFloat2 = 0;

					segundoflag = GetStrings2("Ingrese un numero (Y): ","\nUsted no ha ingresado un numero:");
					system("pause");
					system("cls");
				}
			else
				{
					printf("\nError, por favor ingrese el primer dato para poder operar.\n");
					system("pause");
					system("cls");
				}
				break;

		case 3:

			if(primerflag!=0 && segundoflag!=0)
						{
							 if(flagInt1 != 0 && flagFloat2 != 0)
							{
								printf("a) Se calculara X+Y (%d) + (%.2f). \n", DatoIntuno, DatoFloatdos);
								printf("b) Se calculara X-Y (%d) - (%.2f). \n", DatoIntuno, DatoFloatdos);
								printf("c) Se calculara X/Y (%d) / (%.2f). \n", DatoIntuno, DatoFloatdos);
								printf("d) Se calculara X*Y (%d) * (%.2f). \n", DatoIntuno, DatoFloatdos);
								printf("e) Se calculara el factorial de X (%d) y el factorial de Y (%.2f). \n\n", DatoIntuno, DatoFloatdos);

								SumaFinalFloat = SumaFloatInt(DatoFloatdos, DatoIntuno);
								RestaFinalFloat = RestaIntFloat(DatoIntuno, DatoFloatdos);
								DivisionFinalFloat = DivisionIntFloat(DatoIntuno, DatoFloatdos);
								MultiplicacionFinalFloat = MultiplicacionFloatInt(DatoFloatdos, DatoIntuno);
								PrimerFactorial = Factorial(DatoIntuno);

								system("pause");
								system("cls");

								}
							 if(flagInt1 != 0 && flagInt2 != 0)
							{
								printf("a) Se calculara X+Y (%d) + (%d). \n", DatoIntuno, DatoIntdos);
								printf("b) Se calculara X-Y (%d) - (%d). \n", DatoIntuno, DatoIntdos);
								printf("c) Se calculara X/Y (%d) / (%d). \n", DatoIntuno, DatoIntdos);
								printf("d) Se calculara X*Y (%d) * (%d). \n", DatoIntuno, DatoIntdos);
								printf("e) Se calculara el factorial de X (%d) y el factorial de Y (%d). \n\n", DatoIntuno, DatoIntdos);

								SumaFinalInt = SumaInt(DatoIntuno, DatoIntdos);
								RestaFinalInt = RestaInt(DatoIntuno, DatoIntdos);
								DivisionFinalInt = DivisionInt(DatoIntuno, DatoIntdos);
								MultiplicacionFinalInt = MultiplicacionInt(DatoIntuno, DatoIntdos);
								PrimerFactorial = Factorial(DatoIntuno);
								SegundoFactorial = Factorial(DatoIntdos);

								system("pause");
								system("cls");

								}
							 if(flagFloat1 != 0 && flagInt2 != 0)
							{
								printf("a) Se calculara X+Y (%.2f) + (%d). \n", DatoFloatuno, DatoIntdos);
								printf("b) Se calculara X-Y (%.2f) - (%d). \n", DatoFloatuno, DatoIntdos);
								printf("c) Se calculara X/Y (%.2f) / (%d). \n", DatoFloatuno, DatoIntdos);
								printf("d) Se calculara X*Y (%.2f) * (%d). \n", DatoFloatuno, DatoIntdos);
								printf("e) Se calculara el factorial de X (%.2f) y el factorial de Y (%d). \n\n", DatoFloatuno, DatoIntdos);

								SumaFinalFloat = SumaFloatInt(DatoFloatuno, DatoIntdos);
								RestaFinalFloat = RestaFloatInt(DatoFloatuno, DatoIntdos);
								DivisionFinalFloat = DivisionFloatInt(DatoFloatuno, DatoIntdos);
								MultiplicacionFinalFloat = MultiplicacionFloatInt(DatoFloatuno, DatoIntdos);
								SegundoFactorial =  Factorial(DatoIntdos);

								system("pause");
								system("cls");

								}
							 if(flagFloat1 != 0 && flagFloat2 != 0)
							{
								printf("a) Se calculara X+Y (%.2f) + (%.2f). \n", DatoFloatuno, DatoFloatdos);
								printf("b) Se calculara X-Y (%.2f) - (%.2f). \n", DatoFloatuno, DatoFloatdos);
								printf("c) Se calculara X/Y (%.2f) / (%.2f). \n", DatoFloatuno, DatoFloatdos);
								printf("d) Se calculara X*Y (%.2f) * (%.2f). \n", DatoFloatuno, DatoFloatdos);
								printf("e) Se calculara el factorial de X (%.2f) y el factorial de Y (%.2f). \n\n", DatoFloatuno, DatoFloatdos);

								SumaFinalFloat = SumaFloat(DatoFloatuno, DatoFloatdos);
								RestaFinalFloat = RestaFloat(DatoFloatuno, DatoFloatdos);
								DivisionFinalFloat = DivisionFloat(DatoFloatuno, DatoFloatdos);
								MultiplicacionFinalFloat = MultiplicacionFloat(DatoFloatuno, DatoFloatdos);

								system("pause");
								system("cls");

								}
						}
						else
						{
							printf("Error, debe ingresar ambos datos para poder operar.\n\n");
							system("pause");
							system("cls");
						}

				break;

		case 4:

			if(primerflag!=0 && segundoflag!=0)
			{

				 if(flagInt1 != 0 && flagFloat2 != 0)
				{
					 printf("a) El resultado final de la SUMA X+Y (%d + %.2f) es: %.2f\n", DatoIntuno, DatoFloatdos, SumaFinalFloat);
					 printf("b) El resultado final de la RESTA X-Y (%d - %.2f) es: %.2f\n", DatoIntuno, DatoFloatdos, RestaFinalFloat);

					 if(DivisionFinalFloat == 0)
					{
						 printf("c) El resultado de la Division X/Y (%d / %.2f) es: Error, es imposible dividir por '0'\n", DatoIntuno, DatoFloatdos);
						}
					else
					 {
						printf("c) El resultado de la Division X/Y (%d / %.2f) es: %.2f \n", DatoIntuno, DatoFloatdos, DivisionFinalFloat);
						}

					 printf("d) El resultado de la MULTIPLICACION X*Y (%d * %.2f) es: %.2f \n", DatoIntuno, DatoFloatdos, MultiplicacionFinalFloat);

					 if(PrimerFactorial != -1)
					 {
						 printf("e) El resultado del FACTORIAL de X = (%d) es: %li\n", DatoIntuno, PrimerFactorial);
					 	 }
					 else
					   {
					 	 printf("e) No es posible calcular el FACTORIAL de un numero negativo X = (%d) \n", DatoIntuno);
					 	 }

					 printf("e) No es posible calcular el FACTORIAL de un numero decimal Y = (%.2f) \n\n", DatoFloatdos);

					 system("pause");
					 system("cls");
					}

				 if(flagInt1 != 0 && flagInt2 != 0)
				{
					 printf("a) El resultado final de la SUMA X-Y (%d + %d) es: %d\n", DatoIntuno, DatoIntdos, SumaFinalInt);
					 printf("b) El resultado final de la RESTA X-Y (%d - %d) es: %d\n", DatoIntuno, DatoIntdos, RestaFinalInt);

					 if(DivisionFinalInt == 0)
					{
					 	 printf("c) El resultado de la DIVISION X/Y (%d / %d) es: Error, es imposible dividir por '0'\n", DatoIntuno, DatoIntdos);
					 	 }
					  else
					 	{
					 		printf("c) El resultado de la DIVISION X/Y (%d / %d) es: %.1f \n", DatoIntuno, DatoIntdos, DivisionFinalInt);
					 		}

					 printf("d) El resultado de la MULTIPLICACION X*Y (%d * %d) es: %d \n", DatoIntuno, DatoIntdos, MultiplicacionFinalInt);

					 if(PrimerFactorial != -1)
					 {
						  printf("e) El resultado del FACTORIAL de X = (%d) es: '%li' \n", DatoIntuno, PrimerFactorial);

					 }
					 else
						  {
							  printf("e) No es posible calcular el FACTORIAL de un numero negativo X = (%d)\n", DatoIntuno);
						  }

					 if(SegundoFactorial != -1)
					 {
						  printf("e) El resultado del FACTORIAL de Y = (%d) es: '%li' \n\n", DatoIntdos, SegundoFactorial);

					 }
					 else
					 	 {
						  	  printf("e) No es posible calcular el FACTORIAL de un numero negativo Y = (%d)\n\n", DatoIntdos);
					 	 }


					 system("pause");
					 system("cls");
					}

				 if(flagFloat1 != 0 && flagInt2 != 0)
				{
					 printf("a) El resultado final de la SUMA X+Y (%.2f + %d) es: %.2f\n", DatoFloatuno, DatoIntdos, SumaFinalFloat);
					 printf("b) El resultado final de la RESTA X-Y (%.2f - %d) es: %.2f\n", DatoFloatuno, DatoIntdos, RestaFinalFloat);

					 if(DivisionFinalFloat == 0)
					{
						 printf("c) El resultado de la DIVISION X/Y (%.2f / %d) es: Error, es imposible dividir por '0'\n", DatoFloatuno, DatoIntdos);
					 	}
					 else
					 {
					 	printf("c) El resultado de la DIVISION X/Y (%.2f / %d) es: %.2f \n", DatoFloatuno, DatoIntdos, DivisionFinalFloat);
					 	 }

					 printf("d) El resultado de la MULTIPLICACION X*Y (%.2f * %d) es: %.2f \n", DatoFloatuno, DatoIntdos, MultiplicacionFinalFloat);

					 printf("e) No es posible calcular el FACTORIAL de un numero decimal  X = (%.2f) \n", DatoFloatuno);

					 if(SegundoFactorial != -1)
					 {
						 printf("e) El resultado del FACTORIAL de Y = (%d) es: %li\n", DatoIntdos, SegundoFactorial);
					 }
					  else
					  {
						  printf("e) No es posible calcular el FACTORIAL de un numero negativo Y = (%d) \n\n", DatoIntdos);
					  }


					 system("pause");
					 system("cls");

				 }
				 if(flagFloat1 != 0 && flagFloat2 != 0)
				{
					 printf("a) El resultado final de la SUMA X+Y (%.2f + %.2f) es: %.2f\n", DatoFloatuno, DatoFloatdos, SumaFinalFloat);
					 printf("b) El resultado final de la RESTA X-Y (%.2f - %.2f) es: %.2f\n", DatoFloatuno, DatoFloatdos, RestaFinalFloat);

					 if(DivisionFinalFloat == 0)
					 {
						 printf("c) El resultado de la DIVISION X/Y (%.2f / %.2f) es: Error, es imposible dividir por '0'\n", DatoFloatuno, DatoFloatdos);
						 }
					 else
					 {
						 printf("c) El resultado de la DIVISION X/Y (%.2f / %.2f) es: %.2f \n", DatoFloatuno, DatoFloatdos, DivisionFinalFloat);
					 }

					 printf("d) El resultado de la MULTIPLICACION X*Y (%.2f * %.2f) es: %.2f \n", DatoFloatuno, DatoFloatdos, MultiplicacionFinalFloat);
					 printf("e) No es posible calcular el FACTORIAL de un numero decimal  X = (%.2f) \ne) No es posible calcular el FACTORIAL de un numero decimal  Y = (%.2f)\n\n",DatoFloatuno, DatoFloatdos);

					 system("pause");
					 system("cls");
				 	 }
			}
			else
			{
				printf("Error, debe ingresar ambos datos para operar.\n\n");
				system("pause");
				system("cls");
			}

			break;
		}

		 while(seguir != 1 && seguir != 2 && seguir != 3 && seguir != 4 && seguir != 5)
		{
			printf("Error. ha ingresa una opcion invalida: ");
			scanf("%d", &seguir);
		}

	}while(seguir != 5);
}
//------------------------------------------////////////////////////////////////-------------------------------------------------------------------------------INGRESO DE DATOS//

int GetStrings(char message[], char messageError[])
{
	char Dato1[buffer_size];
	int retorno = 1;

	printf ("%s", message);
	fflush(stdin);
	scanf("%[^\n]", Dato1);

		while(ValidarFloat(Dato1) == 0)
		{
			printf ("%s", messageError);
			fflush(stdin);
			scanf("%[^\n]", Dato1);
		}

		if(ValidarFloat(Dato1) == 1 && ValidarInt(Dato1) == 0)
		{
			DatoFloatuno = TurnIntoFloat(Dato1);
			flagFloat1 = 1;
		}
		else
			{
				DatoIntuno = TurnIntoInt(Dato1);
				flagInt1 = 1;
			}

		return retorno;
}

int GetStrings2(char message2[], char messageError2[])
{

	char Dato2[buffer_size];
	int retorno = 1;

	 printf ("\n%s", message2);
	 fflush(stdin);
	 scanf("%[^\n]", Dato2);

	 while(ValidarFloat(Dato2) == 0)
	 		{
	 			printf ("%s", messageError2);
	 			fflush(stdin);
	 			scanf("%[^\n]", Dato2);
	 		}

	 		if(ValidarFloat(Dato2) == 1 && ValidarInt(Dato2) == 0)
	 		{
	 			DatoFloatdos = TurnIntoFloat(Dato2);
	 			flagFloat2 = 1;
	 		}
	 		else
	 			{
	 				DatoIntdos = TurnIntoInt(Dato2);
	 				flagInt2 = 1;
	 			}

	 return retorno;
}
//------------------------------------------////////////////////////////////////-------------------------------------------------------------------------------VALIDACION DE DATOS//

int ValidarInt(char numero[])
{
	int i;
	int result;
	int countsign = 0;

	result = 1;

	for (i=0; i<strlen(numero); i++)
	{
		if(numero[i] == '-')
		{
			countsign++;
		}
		else
		 {
			if(!isdigit(numero[i]))
			{
				result = 0;

			}
		 }
	}
	if(countsign > 1)
	  {
		result = 0;
	  }

	return result;
}

int ValidarFloat(char validfloat[])
{
	int i;
	int countsign = 0;
	int response;
	response = 1;

	for(i=0; i<strlen(validfloat); i++)
	{
		if(validfloat[i] == '.' || validfloat[i] == ',' || validfloat[i] == '-')
		{
			countsign++;
		}
		else
		{
			if(isdigit(validfloat[i]) == 0)
			{
				response = 0;
				break;
			}
		}
	}
	if(countsign > 2)
	{
		response = 0;
	}
	return response;
}

//------------------------------------------////////////////////////////////////-------------------------------------------------------------------------------CONVERSION DE DATOS//

float TurnIntoFloat(char stringdata[])
{
	float FloatNumber;

		FloatNumber = atof(stringdata);

		return FloatNumber;

}

int TurnIntoInt(char stringdata[])
{
	int IntNumber;

			IntNumber = atoi(stringdata);

			return IntNumber;
}
//------------------------------------------////////////////////////////////////-------------------------------------------------------------------------------SUMA//

float SumaFloat(float PrimernumeroSuma, float SegundonumeroSuma)
{
	float SumaFloatResultado;

	SumaFloatResultado = PrimernumeroSuma + SegundonumeroSuma;

	return SumaFloatResultado;
}

float SumaFloatInt(float PrimernumeroSuma, int SegundonumeroSuma)
{
	float SumaFloatIntResultado;

	SumaFloatIntResultado = PrimernumeroSuma + (float)SegundonumeroSuma;

	return SumaFloatIntResultado;
}

int SumaInt(int PrimernumeroSuma, int SegundonumeroSuma)
{
	int SumaIntResultado;

	SumaIntResultado = PrimernumeroSuma + SegundonumeroSuma;

	return SumaIntResultado;
}
//------------------------------------------////////////////////////////////////-------------------------------------------------------------------------------RESTA//

float RestaFloat(float PrimernumeroResta, float SegundonumeroResta)
{
	float RestaFloatresultado;

	RestaFloatresultado = PrimernumeroResta - SegundonumeroResta;

	return RestaFloatresultado;
}

float RestaFloatInt(float PrimernumeroResta, int SegundonumeroResta)
{
	float RestaFloatIntresultado;

	RestaFloatIntresultado = PrimernumeroResta - (float)SegundonumeroResta;

	return RestaFloatIntresultado;
}

int RestaInt(int PrimernumeroResta, int SegundonumeroResta)
{
	int RestaIntresultado;

	RestaIntresultado = PrimernumeroResta - SegundonumeroResta;

	return RestaIntresultado;
}

float RestaIntFloat(int PrimernumeroResta, float SegundonumeroResta)
{
	float RestaIntFloatResultado;

		RestaIntFloatResultado = (float)PrimernumeroResta - SegundonumeroResta;

		return RestaIntFloatResultado;
}
//------------------------------------------////////////////////////////////////-------------------------------------------------------------------------------DIVISION//

float DivisionFloat(float PrimernumeroDivision, float SegundonumeroDivision)
{
	float resultadoDivision = 0;

	if(SegundonumeroDivision == 0)
	{
		return resultadoDivision;
	}
	else
	{
		resultadoDivision = PrimernumeroDivision / SegundonumeroDivision;

		return resultadoDivision;
	}
}

float DivisionFloatInt(float PrimernumeroDivision, int SegundonumeroDivision)
{
	float DiviFloatIntResultado = 0;

		if(SegundonumeroDivision == 0)
		{
			return DiviFloatIntResultado;
		}
		else
		{
			DiviFloatIntResultado = PrimernumeroDivision / (float)SegundonumeroDivision;

			return DiviFloatIntResultado;
		}
}

float DivisionInt(int PrimernumeroDivision, int SegundonumeroDivision)
{
	float DiviIntResultado = 0;

	if(SegundonumeroDivision == 0)
			{
				return DiviIntResultado;
			}
			else
			{
				DiviIntResultado = (float)PrimernumeroDivision / SegundonumeroDivision;

				return DiviIntResultado;
			}
}

float DivisionIntFloat(int PrimernumeroDivision, float SegundonumeroDivision)
{
	float DiviIntFloatResultado = 0;

		if(SegundonumeroDivision == 0)
				{
					return DiviIntFloatResultado;
				}
				else
				{
					DiviIntFloatResultado = (float)PrimernumeroDivision / SegundonumeroDivision;

					return DiviIntFloatResultado;
				}
}
//------------------------------------------////////////////////////////////////-------------------------------------------------------------------------------MULTIPLICACION//

float MultiplicacionFloat(float PrimernumeroMultiplicacion, float SegundonumeroMultiplicacion)
{

	float resultadoMultiplicacionFloat;

	resultadoMultiplicacionFloat = PrimernumeroMultiplicacion * SegundonumeroMultiplicacion;

	return resultadoMultiplicacionFloat;

}

float MultiplicacionFloatInt(float PrimernumeroMultiplicacion, int SegundonumeroMultiplicacion)
{

	float resultadoMultiplicacionFloat;

	resultadoMultiplicacionFloat = PrimernumeroMultiplicacion * (float)SegundonumeroMultiplicacion;

	return resultadoMultiplicacionFloat;

}

int MultiplicacionInt(int PrimernumeroMultiplicacion, int SegundonumeroMultiplicacion)
{

	int resultadoMultiplicacionInt;

	resultadoMultiplicacionInt = PrimernumeroMultiplicacion * SegundonumeroMultiplicacion;

	return resultadoMultiplicacionInt;

}
//------------------------------------------////////////////////////////////////-------------------------------------------------------------------------------FACTORIAL//

long Factorial(int PrimerFactorial)
{
	int i;
	long factorial = 1;

	if(PrimerFactorial > -1)
	{
		for(i=1;i<=PrimerFactorial;i++)
		{
			factorial *= i;
		}
	}
	else
	{
		factorial = -1;
	}
	return factorial;
}
