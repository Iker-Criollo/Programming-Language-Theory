#include <stdio.h>
#include <math.h>

int main()
{
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;
    int n4 = 0;
    int n5 = 0;
    int suma = 0;
    float promedio = 0.0;
    float diferencia = 0.0;

    printf("Ingrese el primer número entero\n");
    scanf("%d",&n1);
    printf("Ingrese el segundo número entero\n");
    scanf("%d",&n2);
    printf("Ingrese el tercer número entero\n");
    scanf("%d",&n3);
    printf("Ingrese el cuarto número entero\n");
    scanf("%d",&n4);
    printf("Ingrese el quinto número entero\n");
    scanf("%d",&n5);

    suma = n1 + n2 + n3 + n4 + n5;
    promedio = suma / 5.0;
    diferencia = fabs(suma - promedio);

    printf("La suma es %d\n", suma);
    printf("El promedio es %f\n", promedio);

    if (suma > 0)
    {
        printf("La suma es positiva\n");
    }
    else if (suma == 0)
    {
        printf("La suma es 0\n");
    }
    else
    {
        printf("La suma es negativa\n");
    }

    printf("El valor absoluto de la diferencia entre suma y promedio es %f\n", diferencia);
    printf("Operación finalizada correctamente\n");

    return 0;
}
