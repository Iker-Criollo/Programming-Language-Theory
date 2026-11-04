#include <stdio.h> 
#include <math.h>

int main()
{
    float FACTOR_F = 1.8;
    int OFFSET_F = 32;

    float celsius = 0.0;
    float fahrenheit = 0.0;
    float logaritmo = 0.0;

    printf("Ingrese la temperatura en grados Celsius\n");
    scanf("%f",&celsius);

    fahrenheit = (celsius*FACTOR_F+OFFSET_F);

    if (fahrenheit > 0 )
    {
        logaritmo = log10(fahrenheit);
    }
    else
    {
        logaritmo = 0.0;
        printf("No existe logaritmo para números menores o iguales a 0\n");
    }

    printf("%f grados C equivalen a %f grados F\n",celsius,fahrenheit);
    printf("El valor de logaritmo es: %f\n",logaritmo);

    return 0;
}
