#include <stdio.h>
#include <stdbool.h>

int main()
{
    int MIN = 10;
    int MAX = 100;
    int y = 0;
    bool en_rango = false;
    float bono = 0.0;

    printf("Ingrese un número entero\n");
    scanf("%d",&y);

    if (y >= 0)
    {
        en_rango = (y >= MIN && y <= MAX);
        bono = y * 1.5;

        if (en_rango == true)
        {
            printf("El número está dentro del rango\n");
        }
        else
        {
            printf("El número está fuera del rango\n");
        }

        printf("El resultado multiplicado por 1.5 es %f\n", bono);
        printf("Operación finalizada correctamente\n");
    }
    else
    {
        printf("Error: el número no puede ser negativo\n");
    }

    return 0;
}
