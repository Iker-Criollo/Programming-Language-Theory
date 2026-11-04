#include <stdio.h>
#include <stdbool.h>

int main()
{
    char n = ' ';
    bool es_vocal_minuscula = 0;
    int resultado = 0;
    int cuadrado = 0;

    printf("Ingrese un carácter\n");
    scanf(" %c",&n);

    es_vocal_minuscula = (n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u');

    if (es_vocal_minuscula == true)
    {
        resultado = 1;
        printf("El carácter %c es una vocal minúscula\n", n);
    }
    else
    {
        resultado = 0;
        printf("El carácter %c no es una vocal minúscula\n", n);
    }

    cuadrado = resultado * resultado;

    printf("El resultado es %d\n", es_vocal_minuscula);
    printf("El cuadrado del resultado principal es %d\n", cuadrado);
    printf("El valor de resultado es %d\n", resultado);

    return 0;
}
