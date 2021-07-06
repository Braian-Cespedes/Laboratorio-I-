/*
 * Estructura_Empleados.c
 *
 *  Created on: 12 may. 2021
 *      Author: bripo
 */

#include "ArrayEmployees.h"
#include "Generic_Functions.h"


void InitEmployees(eEmployee listaEmployee[], int tam)
{
	int i;

	for(i=0; i<tam; i++)
	{
		listaEmployee[i].IsEmpty = TRUE;
	}
}

int FindFreeIndex(eEmployee listaEmployee[], int tam)
{
	int i;
	int index = -1;

	for(i=0; i<tam; i++)
	{
		if(listaEmployee[i].IsEmpty == TRUE)
		{
			index = i;
			break;
		}
	}
	return index;
}

int FindEmployeeById(eEmployee listaEmployee[], int tam, int datoId)
{
	int i;
	int index = -1;

	for(i=0; i<tam; i++)
	{
		if(listaEmployee[i].Id == datoId)
		{
			index = i;
			break;
		}
	}
	return index;
}

void RemoveEmployee(eEmployee listaEmployee[], int tam, int indice, char mensaje[])
{
	int i;

	for(i=0; i<tam; i++)
	{
		if(i == indice)
			{
				printf("%s", mensaje);
				listaEmployee[i].IsEmpty = TRUE;
				break;
			}
	}

}

void AddOneEmployee(eEmployee listaEmployee[], int tamEmployee, int IdIncrementalEmployee)
{
	int i;
	i = FindFreeIndex(listaEmployee, tamEmployee);

	if(i != -1)
	{
		listaEmployee[i] = AddEmployee(IdIncrementalEmployee);
		if(listaEmployee[i].IsEmpty == FALSE)
		{
			printf("\nDatos cargados con exito!!\n\n");
			system("pause");
			system("cls");
		}
	}
	else
	{
		 printf("\nNo hay espacio para la carga de datos\n\n");
		 system("pause");
		 system("cls");
	}
}

void PrintEmployees(eEmployee listaEmployee[], int tamEmployee)
{
	int i;
	for(i=0; i<tamEmployee; i++)
		{
			if(listaEmployee[i].IsEmpty == FALSE)
				{
					printf("\n*%4d %9s %11s %10.2f$ %8d\n", listaEmployee[i].Id,
															listaEmployee[i].Name,
															listaEmployee[i].lastName,
															listaEmployee[i].Salary,
															listaEmployee[i].Sector);
				}
		}
}

eEmployee AddEmployee(int IdIncrementalEmployee)
{
	eEmployee AddedEmployee;

	Get_OnlyAlphabetStringWithSpaces("\nIngrese el nombre del empleado: ", "Ingrese el nombre nuevamente(solo caracteres alfabeticos): ", AddedEmployee.Name, max_caracter);
	Get_OnlyAlphabetStringWithSpaces("\nIngrese el apellido del empleado: ", "Ingrese el apellido nuevamente(solo caracteres alfabeticos): ", AddedEmployee.lastName, max_caracter);
	AddedEmployee.Salary = GetFloat("\nIngrese el salario del empleado: ", "Ingrese el salario nuevamente (solo caracteres numericos positivos): ");
	AddedEmployee.Sector = GetInt("\nIngrese el sector al que corresponda el empleado: ", "Ingrese el sector nuevamente (solo caracteres numericos enteros): ");
	AddedEmployee.Id = IdIncrementalEmployee;
	AddedEmployee.IsEmpty = FALSE;

	return AddedEmployee;

}


void ModifyAEmployee(eEmployee listaEmployee[], int tamEmployee)
{
	int indexEmployee;
	int idIngresada;
	char auxNombre[max_caracter];
	char auxApellido[max_caracter];
	float auxSalario;
	int auxSector;
	int opcion;
	char seguir;

		PrintEmployees(listaEmployee, tamEmployee);

		idIngresada = GetInt("\n\nIngrese el id a la cual le desea modificar datos: ", "\nReingrese el id: ");
		indexEmployee = FindEmployeeById(listaEmployee, tamEmployee, idIngresada);

		if(indexEmployee != -1)
		{
		  opcion = GetIntRange("\n\nSe ha encontrado la Id ingresada !!\nQue desea modificar? \n\n1-Nombre\n\n2-Apellido\n\n3-Salario\n\n4-Sector\n\nIngrese una opcion: ", "Usted ha ingresado una opcion incorrecta, reingrese: ", 1, 4);

			switch(opcion)
			{
				case 1:

					Get_OnlyAlphabetStringWithSpaces("Ingrese el nuevo nombre: ", "Error, reingrese el nombre de nuevo: ", auxNombre, max_caracter);
					seguir = getChar("\nEsta seguro de querer continuar? Ingrese 's' para continuar o 'n' para cancelar: ", "Ingrese 's' para continuar o 'n' para cancelar la modificacion: ");

					if(seguir == 's')
						{
							strcpy(listaEmployee[indexEmployee].Name, auxNombre);
							printf("\nNombre modificado con exito!!\n");
							system("pause");
							system("cls");
						}
						else
							{
								printf("\nSe ha cancelado la modificacion del nombre\n");
								system("pause");
								system("cls");
							}
					break;

				case 2:

					Get_OnlyAlphabetStringWithSpaces("Ingrese el nuevo apellido: ", "Error, reingrese el apellido de nuevo: ", auxApellido, max_caracter);
					seguir = getChar("\nEsta seguro de querer continuar? Ingrese 's' para continuar o 'n' para cancelar: ", "Ingrese 's' para continuar o 'n' para cancelar la modificacion: ");

						if(seguir == 's')
							{
								strcpy(listaEmployee[indexEmployee].lastName, auxApellido);
								printf("\nApellido modificado con exito!!\n");
								system("pause");
								system("cls");
							}
								else
									{
										printf("\nSe ha cancelado la modificacion del apellido\n");
										system("pause");
										system("cls");
									}
					break;

				case 3:

					auxSalario = GetFloat("Ingrese el salario del empleado: ", "Ingrese el salario nuevamente (solo caracteres numericos positivos): ");
					seguir = getChar("\nEsta seguro de querer continuar? Ingrese 's' para continuar o 'n' para cancelar: ", "Ingrese 's' para continuar o 'n' para cancelar la modificacion: ");

					   if(seguir == 's')
						{
							listaEmployee[indexEmployee].Salary = auxSalario;
							printf("\nSalario modificado con exito!!\n");
							system("pause");
							system("cls");
						}
							else
								{
									printf("\nSe ha cancelado la modificacion del salario\n");
									system("pause");
									system("cls");
								}
					break;

				case 4:

					auxSector = GetInt("Ingrese el sector al que corresponda el empleado: ", "Ingrese el sector nuevamente (solo caracteres numericos enteros): ");
					seguir = getChar("\nEsta seguro de querer continuar? Ingrese 's' para continuar o 'n' para cancelar: ", "Ingrese 's' para continuar o 'n' para cancelar la modificacion: ");

					   if(seguir == 's')
						{
							listaEmployee[indexEmployee].Sector = auxSector;
							printf("\nSector modificado con exito!!\n");
						}
							else
								{
									printf("\nSe ha cancelado la modificacion del sector\n");
									system("pause");
									system("cls");
								}
					break;
			}
		}
		else
			{
				printf("\nNo se ha encontrado la id ingresada\n");
				system("pause");
				system("cls");
			}
}

void DeleteEmpleoyee(eEmployee listaEmployee[], int tamEmployee)
{
	int idEliminar;
	int index;
	char seguir;

		PrintEmployees(listaEmployee, tamEmployee);

		idEliminar = GetInt("\n\nIngrese la id la cual desea eliminar: ", "\nReingrese id (solo ids pertenecientes a la lista): ");
		index = FindEmployeeById(listaEmployee, tamEmployee, idEliminar);
		//printf("%d", index);

		if(index != -1)
			{
				seguir = getChar("\nSe ha encontrado la id ingresada, esta seguro de querer continuar? Ingrese s(si) o n(no): ", "\nReingrese s(si) o n(no): ");

				if(seguir == 's')
					{
						RemoveEmployee(listaEmployee, tamEmployee, index, "\nSe ha eliminado el empleado con exito!!!\n");
					}
						else
						{
							printf("\nUsted ha cancelado la baja del empleado\n");
							system("pause");
							system("cls");
						}
			}
			else
			{
				printf("\nNo se ha encontrado la id ingresada\n");
				system("pause");
				system("cls");
			}
}


void OrderEmployees_Salary_Sector(eEmployee listaEmployee[], int tamEmployee, int respuesta)
{
	eEmployee aux;
	int i;
	int j;

	for(i=0; i<tamEmployee-1; i++)
	{
		for(j=i+1; j<tamEmployee; j++)
		{
			if(respuesta == 1)
			{
				if(strcmp(listaEmployee[i].lastName, listaEmployee[j].lastName)<0)
				{
					aux = listaEmployee[i];
					listaEmployee[i] = listaEmployee[j];
					listaEmployee[j] = aux;

				}
				else
				{
					if((strcmp(listaEmployee[i].lastName, listaEmployee[j].lastName)<0) && (listaEmployee[i].Sector > listaEmployee[j].Sector))
						{
							{
								aux = listaEmployee[i];
								listaEmployee[i] = listaEmployee[j];
								listaEmployee[j] = aux;
							}
						}
				}
			}
			else
			{
				if(strcmp(listaEmployee[i].lastName, listaEmployee[j].lastName)>0)
						{
							aux = listaEmployee[i];
							listaEmployee[i] = listaEmployee[j];
							listaEmployee[j] = aux;

						}
						else
						{
							if((strcmp(listaEmployee[i].lastName, listaEmployee[j].lastName)>0) && (listaEmployee[i].Sector > listaEmployee[j].Sector))
								{
									{
										aux = listaEmployee[i];
										listaEmployee[i] = listaEmployee[j];
										listaEmployee[j] = aux;
									}
								}
						}
			}
		}
	}
	PrintEmployees(listaEmployee, tamEmployee);
}

int MenuEmployee(eEmployee listaEmployee[], int tamEmployee)
{
	float suma;
	float promedio;
	int ContadorEmpleadosMaxSalario;

	int continuar;
	int respuesta;
	do
		{
			printf("\n#### Menu Mostrar ###");
			printf("\n\n1-Listado de los empleados ordenados alfabeticamente por Apellido y Sector.\n");
			printf("2-Total y promedio de los salarios (empleados que superan el salario promedio).\n");
			printf("3-Salir.\n");
			continuar = GetIntRange("\nIngrese una opcion: ", "Usted ha ingresado una opcion invalida: \n", 1, 3);

				switch(continuar)
					{
						case 1:
							printf("\n\n1-Listado ascedente (Z-A) de empleados.\n");
							printf("2-Listado descendente (A-Z) de emlpeados.\n");
							printf("3-Salir.\n");

							respuesta = GetIntRange("\nIngrese una opcion: ", "Usted ha ingresado una opcion invalida: \n", 1, 3);
							switch (respuesta)
							{
								case 1:

									printf("\n\nListado ascedente de empleados\n");
									printf("\n%5s %10s %12s %9s %10s", "Id", "Nombre", "Apellido", "Salario", "Sector\n");
									OrderEmployees_Salary_Sector(listaEmployee, tamEmployee, respuesta);
									system("pause");
									system("cls");

									break;

								case 2:

									printf("\n\nListado descendente de emlpeados\n");
									printf("\n%5s %10s %12s %9s %10s", "Id", "Nombre", "Apellido", "Salario", "Sector\n");
									OrderEmployees_Salary_Sector(listaEmployee, tamEmployee, respuesta);
									system("pause");
									system("cls");

									break;

								default:

									printf("\nUsted ha cancelado el ordenamiento.\n");
									system("pause");
									system("cls");
							}


						break;

						case 2:

							printf("\n\nListado de empleados encontrados\n");
							printf("\n%5s %10s %12s %9s %10s", "Id", "Nombre", "Apellido", "Salario", "Sector\n");
							PrintEmployees(listaEmployee, tamEmployee);
							suma = SumSalaries(listaEmployee, tamEmployee);
							promedio = AverageSalarie(listaEmployee, tamEmployee);
							ContadorEmpleadosMaxSalario = ShowAverageEmployess(listaEmployee, tamEmployee);
							printf("\n\nEl total del salario de los empleados es: %.2f$\n", suma);
							printf("\nEl promedio de todos los salarios de los empleados es: %.2f$\n", promedio);
							printf("\nLa cantidad de empleados que supera el salario promedio es: %d\n", ContadorEmpleadosMaxSalario);
							system("pause");
							system("cls");
						break;
							}

						}while(continuar !=3);

		if(continuar == 3 || continuar > 3)
		{
			continuar = -1;
		}
		return continuar;
}


float SumSalaries(eEmployee listaEmployee[], int tamEmployee)
{
    int i;
    float AcumularSalarios = 0;

    for(i=0; i<tamEmployee; i++)
    {
        if(listaEmployee[i].IsEmpty == FALSE)
        {
        	AcumularSalarios += listaEmployee[i].Salary;
        }
    }
    return AcumularSalarios;
}

float AverageSalarie(eEmployee listaEmployee[], int tamEmployee)
{
    int i;
    float PromedioSalarios = 0;

    for(i=0; i<tamEmployee; i++)
    {
        if(listaEmployee[i].IsEmpty == FALSE)
        {
        	PromedioSalarios = SumSalaries(listaEmployee, tamEmployee) / CountEmployees(listaEmployee, tamEmployee);
        }
    }
    return PromedioSalarios;
}


int CountEmployees(eEmployee listaEmployee[], int tamEmployee)
{
    int i;
    int ContadorEmpleados = 0;

    for(i=0; i<tamEmployee; i++)
    {
        if(listaEmployee[i].IsEmpty == FALSE)
        {
        	ContadorEmpleados++;
        }
    }
    return ContadorEmpleados;
}


int ShowAverageEmployess(eEmployee listaEmployee[], int tamEmployee)
{
    int i;
    float Promedio;
    int EmpleadosConMayorSueldo = 0;
    Promedio = AverageSalarie(listaEmployee, tamEmployee);

    for(i=0; i<tamEmployee; i++)
    {
        if(listaEmployee[i].IsEmpty == FALSE && listaEmployee[i].Salary > Promedio)
        {
        	EmpleadosConMayorSueldo++;
        }
    }
    return EmpleadosConMayorSueldo;
}
