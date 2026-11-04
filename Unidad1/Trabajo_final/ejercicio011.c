#include <stdio.h>
#include <stdbool.h>

int main()
{
    float PI = 3.1416;
    char y = ' ';
    bool es_mayuscula = false;
    int resultado = 0;
    float producto = 0.0;

    printf("Ingrese un carácter\n");
    scanf(" %c",&y);

    es_mayuscula = (y >= 'A' && y <= 'Z');

    if (es_mayuscula == true)
    {
        printf("El carácter %c es mayúscula\n", y);
        resultado = 1;
    }
    else
    {
        printf("El carácter %c no es mayúscula\n", y);
        resultado = 0;
    }

    producto = resultado * PI;

    printf("El producto del resultado por PI es %f\n", producto);
    printf("El tipo de operación realizada es una multiplicación\n");

    return 0;
}
