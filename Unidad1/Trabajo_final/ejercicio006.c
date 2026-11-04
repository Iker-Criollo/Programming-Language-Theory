#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char nombre[100];
    float nota1 = 0.0;
    float nota2 = 0.0;
    float nota3 = 0.0;
    float promedio = 0.0;
    float NOTA_MIN = 7.0;

    printf("Ingrese su nombre\n");
    fgets(nombre,sizeof(nombre),stdin);
    nombre[strcspn(nombre,"\n")] = '\0';

    printf("Ingrese nota 1\n");
    scanf("%f",&nota1);
    printf("Ingrese nota 2\n");
    scanf("%f",&nota2);
    printf("Ingrese nota 3\n");
    scanf("%f",&nota3);

    if (nota1 >= 0 && nota1 <=10 && nota2>= 0 && nota2<=10 && nota3>=0 && nota3 <=10)
    {
        promedio = (nota1+nota2+nota3)/3;

        if (promedio >= NOTA_MIN)
        {
            printf("%s tiene un promedio de: %.2f y aprobó\n",nombre,promedio);
        }
        else
        {
            printf("%s tiene un promedio de: %.2f y reprobó\n",nombre,promedio);
        }

        printf("Coseno del ángulo %.2f es: %f\n", promedio, cos(promedio));
        printf("El tipo de operación realizada es promedio y coseno\n");

    }

    else
    {
        printf("Error: las notas deben estar entre 0 y 10\n");
    }
    
    

    return 0;
}
