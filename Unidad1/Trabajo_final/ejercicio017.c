#include <stdio.h>
#include <math.h>

int main()
{
    float TASA_CAMBIO = 1.08;
    float euros = 0.0;
    float dolares = 0.0;
    float logaritmo = 0.0;

    printf("Ingrese el monto en euros\n");
    scanf("%f",&euros);

    if (euros > 0)
    {
        dolares = euros * TASA_CAMBIO;
        logaritmo = log10(dolares);

        printf("%f euros equivalen a %f dólares\n", euros, dolares);
        printf("El logaritmo en base 10 del resultado es %f\n", logaritmo);
    }
    else
    {
        printf("Error: el monto en euros debe ser mayor que cero\n");
    }

    printf("El valor de euros es %f\n", euros);
    printf("El valor de TASA_CAMBIO es %f\n", TASA_CAMBIO);
    printf("El valor de dolares es %f\n", dolares);
    printf("El valor de logaritmo es %f\n", logaritmo);

    return 0;
}
