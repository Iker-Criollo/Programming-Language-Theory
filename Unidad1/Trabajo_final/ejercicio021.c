#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    int a = 0;
    bool es_positivo = false;
    bool es_negativo = false;
    bool es_cero = false;
    float coseno = 0.0;
    int valor = 0;

    printf("Ingrese un número entero\n");
    scanf("%d",&a);

    es_positivo = a > 0;
    es_negativo = a < 0;
    es_cero = a == 0;

    if (es_positivo == true)
    {
        printf("El número es positivo\n");
        valor = 1;
    }

    if (es_negativo == true)
    {
        printf("El número es negativo\n");
        valor = 0;
    }

    if (es_cero == true)
    {
        printf("El número es cero\n");
    }

    coseno = cos(valor);

    printf("El coseno del número es %f\n", coseno);
    printf("El tipo de operación realizada es coseno\n");

    return 0;
}
