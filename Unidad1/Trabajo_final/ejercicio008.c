#include <stdio.h>

int main()
{
    
    float base = 0.0;
    float altura = 0.0;
    float area = 0.0;
    float doble_area = 0.0;
    float doble_perimetro = 0.0;
    float perimetro = 0.0;


    printf("Ingrese la base del rectángulo\n");
    scanf("%f",&base);
    printf("Ingrese la altura del rectángulo\n");
    scanf("%f",&altura);

    if (base > 0 && altura > 0)
    {
        area = base * altura;
        perimetro = 2*(base+altura);
        doble_area = area*2;
        doble_perimetro = perimetro*2;

        printf("El área del rectángulo es: %f\n",area);
        printf("El perímetro del rectángulo es: %f\n", perimetro);
        printf("El área doble del rectángulo es: %f\n", doble_area);
        printf("El perímetro doble del rectángulo es: %f\n", doble_perimetro);
        printf("Operación finalizada correctamente\n");
    }
    else
    {
        printf("Error: la base y la altura deben ser mayores que cero\n");
    }
    

    return 0;
}
