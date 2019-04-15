#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 3

typedef struct
{
    int legajo;
    char nombre [20];
    char sexo;
    float sueldo;
    int estado;
}eEmpleado;

//inicializarEmpleados (eEmpleado vec[], int tam);
void mostrarEmpleado (eEmpleado emp);
void mostrarEmpleados (eEmpleado vec[], int tam);
int buscarLibre (eEmpleado vec[], int tam);

int main()
{
    char seguir = 's';
    int opcion;
    eEmpleado lista[TAM] = {{123, "Ignacio", 'm', 27800, 1},{456, "Martina", 'f', 28000, 1},{789, "Fernando", 'm', 25000, 0}};

    //inicializarEmpleados (lista,TAM)
 do
    {
        printf("\nIngrese una opcion: ");
        scanf("%d", &opcion);

        switch (opcion)
        {
            case 1:
                printf("\n1- Alta empleado");
            break;

            case 2:
                printf("\n2- Baja empleado\n");
            break;

            case 3:
                printf("\n3- Modificacion empledo \n");
            break;

            case 4:
                printf("\n4- Listar \n");
                mostrarEmpleados(lista, TAM);
            break;

            case 5:
                printf("\n5- Ordenar \n");
            break;

            case 6:
                printf("\n6- Salir. Desea continuar, ingrese s/n: ");
                fflush(stdin);
                scanf("%c", &seguir);
            break;
        }
    }while (seguir != 'n');

}
    void mostrarEmpleado (eEmpleado emp)
    {
        printf("\n%d    "  "%s  "  "%c  "  "%2.f    ", emp.legajo, emp.nombre, emp.sexo, emp.sueldo);
    }

    void mostrarEmpleados (eEmpleado vec[], int tam)
    {
        printf (" Legajo    Nombre  Sexo    Sueldo");

        int contador;

        for (int i=0; i<tam; i++)
        {
            if(vec[i].estado == 1)
            {
                mostrarEmpleado(vec[i]);
                contador++;
            }
            if (contador == 0)
            {
                printf("\nNo hay empleados que mostrar");
            }
        }

    int buscarLibre (eEmpleado vec[], int tam)
    {
        for (int i)

    }
}
    /*inicializarEmpleados (eEmpleado vec[], int tam);
    {
        for (int i=0; i<tam; i++)
        {
            vec[i].estado = 0;
        }

    }*/
