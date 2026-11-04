#include <stdio.h>
#include <math.h>

int main()
{
    float LIMITE_BAJO = 18.5;
    float LIMITE_ALTO = 25.0;
    float peso = 0.0;
    float altura = 0.0;
    float imc = 0.0;
    float resto = 0.0;

    printf("Ingrese el peso en kg\n");
    scanf("%f",&peso);
    printf("Ingrese la altura en metros\n");
    scanf("%f",&altura);

    if (peso > 0 && altura > 0)
    {
        imc = peso / (altura * altura);
        resto = peso - trunc(peso / 2) * 2;

        printf("El IMC calculado es %f\n", imc);
        printf("El resto de la división adicional es %f\n", resto);

        if (imc >= LIMITE_BAJO && imc <= LIMITE_ALTO)
        {
            printf("El IMC está en el rango normal\n");
        }
        else
        {
            printf("El IMC no está en el rango normal\n");
        }

        printf("Operación finalizada correctamente\n");
    }
    else
    {
        printf("Error: el peso y la altura deben ser mayores que cero\n");
    }

    return 0;
}
