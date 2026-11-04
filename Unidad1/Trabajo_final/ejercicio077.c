#include <stdio.h>

int main()
{
    float BONO_TIEMPO = 0.10;
    int BONO_NIVEL = 100;
    float TIEMPO_MIN = 30.0;
    int NIVEL_MAX = 10;

    int puntos = 0;
    float tiempo = 0.0;
    int nivel = 0;
    float bono_tiempo = 0.0;
    float bono_nivel = 0.0;
    float puntuacion_total = 0.0;
    float minimo = 0.0;

    printf("Ingrese los puntos obtenidos\n");
    scanf("%d",&puntos);
    printf("Ingrese el tiempo jugado en minutos\n");
    scanf("%f",&tiempo);
    printf("Ingrese el nivel alcanzado\n");
    scanf("%d",&nivel);

    if (puntos >= 0 && nivel >= 1 && nivel < NIVEL_MAX)
    {
        if (tiempo < TIEMPO_MIN)
        {
            bono_tiempo = puntos * BONO_TIEMPO;
        }
        else
        {
            bono_tiempo = 0;
        }

        bono_nivel = nivel * BONO_NIVEL;
        puntuacion_total = puntos + bono_nivel + bono_tiempo;
        minimo = puntos;
        if ( tiempo< minimo)
        {
            minimo = tiempo;
        }
        if ( nivel < minimo)
        {
            minimo = nivel;
        }
        if ( bono_tiempo < minimo)
        {
            minimo = bono_tiempo;
        }
        if ( bono_nivel < minimo)
        {
            minimo = bono_nivel;
        }
        if ( puntuacion_total < minimo)
        {
            minimo = puntuacion_total;
        }
        
        
        printf("La puntuación total es %.2f\n",puntuacion_total);
        printf("El valor minimo de las variables utilizadas es %.2f\n",minimo);
        
        
    }
    else
    {
        printf("Error: puntos debe ser >= 0 y el nivel debe estar entre 1 y 10 \n");
    }
    
    
    
    return 0;
}
