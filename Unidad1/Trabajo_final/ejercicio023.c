#include <stdio.h>
#include <string.h>

int main()
{
    int mes = 0;
    char nombre_mes[20] = "";
    int doble = 0;

    printf("Ingrese un número del 1 al 12\n");
    scanf("%d",&mes);

    if (mes >= 1 && mes <= 12)
    {
        if (mes == 1)
        {
            strcpy(nombre_mes, "Enero");
        }
        if (mes == 2)
        {
            strcpy(nombre_mes, "Febrero");
        }
        if (mes == 3)
        {
            strcpy(nombre_mes, "Marzo");
        }
        if (mes == 4)
        {
            strcpy(nombre_mes, "Abril");
        }
        if (mes == 5)
        {
            strcpy(nombre_mes, "Mayo");
        }
        if (mes == 6)
        {
            strcpy(nombre_mes, "Junio");
        }
        if (mes == 7)
        {
            strcpy(nombre_mes, "Julio");
        }
        if (mes == 8)
        {
            strcpy(nombre_mes, "Agosto");
        }
        if (mes == 9)
        {
            strcpy(nombre_mes, "Septiembre");
        }
        if (mes == 10)
        {
            strcpy(nombre_mes, "Octubre");
        }
        if (mes == 11)
        {
            strcpy(nombre_mes, "Noviembre");
        }
        if (mes == 12)
        {
            strcpy(nombre_mes, "Diciembre");
        }

        doble = mes * 2;

        printf("El mes correspondiente es %s\n", nombre_mes);
        printf("El doble del número ingresado es %d\n", doble);
        printf("Operación finalizada correctamente\n");
    }
    else
    {
        printf("Error: el número debe estar entre 1 y 12\n");
    }

    return 0;
}
