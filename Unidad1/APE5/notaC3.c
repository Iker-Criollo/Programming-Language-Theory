#include <stdio.h>

int main()
{
    float C1 = 0.0; // Nota del certamen 1
    float C2 = 0.0; // Nota del certamen 2
    float C3 = 0.0; // Nota del certamen 3
    float NC = 0.0; // Promedio de los certamenes
    float NL = 0.0; // Nota de laboratorio
    float NF = 0.0; // Nota final

    printf("Introduzca el valor de C1\n");
    scanf("%f", &C1); // Guarda el valor de C2
    printf("Introduzca el valor de C2\n");
    scanf("%f", &C2); // Guarda el valor de C2
    printf("Introduzca el valor de NL\n");
    scanf("%f", &NL); // Guarda el valor de NL

    NC = (60.0 - (NL*0.3))/0.7; // Calcular el valor de CN
    C3 = (3.0 * NC) - C1 - C2;  // Calcular el valor de C3
    NF = (NC * 0.7) + (NL * 0.3); // Calcular el valor de NF

    if (C3 < 0) // Verificar si C3 es positivo o negativo
    {
        printf("El estudiante ya aprueba con las notas que tiene\n"); // Mensaje si C3 es negativo
    }
    else
    {
        printf("La nota minima requerida del certamen 3 es: %.2f\n", C3); // Mensaje si C3 es positivo
    }
    printf("la nota final del estudiante es: %.2d", NF); // Mensaje con la nota final

    return 0;
}
