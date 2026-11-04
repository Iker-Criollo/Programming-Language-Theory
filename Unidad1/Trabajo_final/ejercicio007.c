#include <stdio.h>

int main()
{
    int segundos = 0;
    int h = 0;
    int m = 0;
    int s = 0;

    float inv_h = 0.0;
    float inv_m = 0.0;
    float inv_s = 0.0;

    printf("Ingrese la cantidad de segundos\n");
    scanf("%d",&segundos);

    if (segundos >= 0)
    {
        h = segundos/3600;
        m = ((segundos%3600)/60);
        s = (segundos % 60);
        printf("%d horas, %d minutos y %d segundos\n",h,m,s);
        printf("El número de horas es: %d\n", h);
        printf("El número de minutos es: %d\n", m);
        printf("El número de segundos es: %d\n", s);

        if (h > 0)
        {
            inv_h = 1.0/h;
            printf("El valor del inverso de h es: %.2f\n",inv_h);
        }
        else
        {
            printf("El valor del inverso para h no está definido\n");
        }
        
        if (m > 0)
        {
            inv_m = 1.0/m;
            printf("El valor del inverso de m es: %.2f\n",inv_m);
        }
        else
        {
            printf("El valor del inverso para m no está definido\n");
        }
        if (s > 0)
        {
            inv_s = 1.0/s;
            printf("El valor del inverso de s es: %.2f\n",inv_s);
        }
        else
        {
            printf("El valor del inverso para s no está definido\n");
        }

    }
    else
    {
        printf("La cantidad de segundos debe ser positiva\n");
    }
    
    

    return 0;
}
