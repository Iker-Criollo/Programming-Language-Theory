#include <stdio.h>

int main()
{
    float PI = 3.14159;
    float radio = 0.0;
    float altura = 0.0;
    float area_base = 0.0;
    float area_lateral = 0.0;
    float area_total = 0.0;
    float volumen = 0.0;
    float minimo = 0.0;

    printf("Ingrese el radio del cilindro\n");
    scanf("%f",&radio);
    printf("Ingrese la altura del cilindro\n");
    scanf("%f",&altura);

    if (radio > 0 && altura > 0)
    {
        area_base = PI * radio * radio;
        area_lateral = 2  * PI * radio * altura;
        area_total = 2 * area_base + area_lateral;
        volumen  =area_base * altura;

        minimo = radio;

        if (altura < minimo)
        {
            minimo  = altura;
        }
        if (area_base < minimo)
        {
            minimo  = area_base;
        }
        if (area_lateral < minimo)
        {
            minimo  = area_lateral;
        }
        if (area_total < minimo)
        {
            minimo  = area_total;
        }
        
        if (volumen < minimo)
        {
            minimo  = volumen;
        }
     
        printf("EL valor del radio es %.2f\n",radio);
        printf("EL valor de la altura es %.2f\n",altura);
        printf("EL valor del area de la base %.2f\n",area_base);
        printf("EL valor del area lateral es %.2f\n",area_lateral);
        printf("EL valor del area total es %.2f\n",area_total);
        printf("EL valor del volumen es %.2f\n",volumen);
        printf("EL valor minimo de las variables itilizadas es %.2f\n",minimo);

    }
    else
    {
        printf("Error: el radio y la altura deben ser mayores que cero\n");
    }
    
    

    return 0;
}
