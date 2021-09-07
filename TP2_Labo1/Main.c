/*
1 Enunciado
Una empresa requiere un sistema para administrar su n�mina de empleados. Se sabe que
dicha n�mina bajo ninguna circunstancia superara los 1000 empleados.
Datos:
El sistema deber� tener el siguiente men� de opciones:
1. ALTAS: Se debe permitir ingresar un empleado calculando autom�ticamente el n�mero
de Id. El resto de los campos se le pedir� al usuario.
2. MODIFICAR: Se ingresar� el N�mero de Id, permitiendo modificar: o Nombre o Apellido
o Salario o Sector
3. BAJA: Se ingresar� el N�mero de Id y se eliminar� el empleado del sistema.
4. INFORMAR:
1. Listado de los empleados ordenados alfab�ticamente por Apellido y Sector.
2. Total y promedio de los salarios, y cu�ntos empleados superan el salario promedio.
NOTA: Se deber� realizar el men� de opciones y las validaciones a trav�s de funciones.
Tener en cuenta que no se podr� ingresar a los casos 2, 3 y 4; sin antes haber realizado la
carga de alg�n empleado.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayEmployees.h"
#include "Generic_Functions.h"


int main(void) {

	setbuf(stdout, NULL);

	eEmployee ListaEmpleados[E];

	int IdIncrementalEmployee = 0;
	int seguir;
	int continuar;
	int ControlFlag = 0;

	InitEmployees(ListaEmpleados, E);

	do
	{
		printf("#### Menu de empleados ###");
		printf("\n\n1-Alta Empleado.\n");
		printf("2-Modificar Empleado.\n");
		printf("3-Baja Empleado.\n");
		printf("4-Listado de Empleados ingresados.\n");
		printf("5-Salir.\n");
		seguir = GetIntRange("\nIngrese una opcion: ", "Usted ha ingresado una opcion invalida: \n", 1, 5);

		switch(seguir)
		{
			case 1:

				IdIncrementalEmployee++;
				AddOneEmployee(ListaEmpleados, E, IdIncrementalEmployee);
				ControlFlag = 1;

				break;

			case 2:

				if(ControlFlag != 0)
				{

					printf("\n\nListado de empleados encontrados\n");
					printf("\n%5s %10s %12s %9s %10s", "Id", "Nombre", "Apellido", "Salario", "Sector\n");
					ModifyAEmployee(ListaEmpleados, E);
					system("cls");
				}

				else
					{
						printf("\nTiene que haber almenos un empleado cargado para poder acceder a esta opcion.\n\n");
						system("cls");
					}

				break;

			case 3:

				if(ControlFlag != 0)
				{
					printf("\n\nListado de empleados encontrados\n");
					printf("\n%5s %10s %12s %9s %10s", "Id", "Nombre", "Apellido", "Salario", "Sector\n");
					DeleteEmpleoyee(ListaEmpleados, E);
					IdIncrementalEmployee--;
					system("cls");
				}
				else
				{
					printf("\nTiene que haber almenos un empleado cargado para poder acceder a esta opcion.\n\n");
					system("cls");
				}

				break;

			case 4:

				if((ControlFlag != 0))
				{
						continuar = MenuEmployee(ListaEmpleados, E);

						if(continuar == -1)
						{
							printf("Sera redireccionado al menu principal\n\n");
							system("cls");
						}
				}
				else
				{
					printf("\nTiene que haber almenos un empleado cargado para poder acceder a esta opcion.\n\n");
					system("cls");
				}

				break;
		}

	}while(seguir != 5);

}

