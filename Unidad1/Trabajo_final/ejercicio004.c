#include <stdio.h>
#include <string.h>

int main()
{
    int MAYORIA_EDAD  =18;
    char nombre[100];
    int anio_nacimiento = 0;
    int anio_actual = 0;
    int edad = 0;
    int minimo = 0;

    printf("Ingrese el nombre de la persona\n");
    fgets(nombre,sizeof(nombre),stdin);
    nombre[strcspn(nombre,"\n")] = '\0';
    printf("Ingrese el año de nacimiento\n");
    scanf("%d",&anio_nacimiento);
    printf("Ingrese el año actual\n");
    scanf("%d",&anio_actual);

    if (anio_nacimiento >= 0 && anio_actual >= 0 && anio_actual >= anio_nacimiento)
    {
        edad = anio_actual-anio_nacimiento;

        if (edad >= MAYORIA_EDAD)
        {
            printf("%s tiene %d años y es mayor de edad\n",nombre,edad);
        }
        else
        {
            printf("%s tiene %d años y es menor de edad\n",nombre,edad);
        }
        
        minimo = anio_nacimiento;

        if (anio_actual < minimo)
        {
            minimo = anio_actual;
        }
        if (edad < minimo)
        {
            minimo = edad;
        }
        if (MAYORIA_EDAD < minimo)
        {
            minimo = MAYORIA_EDAD;
        }


        printf("El valor mínimo de las variables numéricas es: %d\n",minimo);
        

    }
    else
    {
        printf("Error: los años no pueden ser negativos y el año actual debe ser mayor o igual al de nacimiento\n");
    }
    
    


    return 0;
}
