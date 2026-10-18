#include <stdio.h>

int cant_documentos = 0;
int cant_imagenes = 0;
int cant_videos = 0;
int cant_programas = 0;
float tam_documentos = 0.0;
float tam_imagenes = 0.0;
float tam_videos = 0.0;
float tam_programas = 0.0;
float espacio_disco = 0;
int espacio_documentos  = 0;
int espacio_imagenes = 0;
int espacio_videos = 0;
int espacio_programas = 0;
int espacio_total = 0;
float espacio_total_gb = 0;
float porcentaje = 0.0;

const float F_CONVERSION = 1024;

int main()
{
    printf("Introduzca la cantidad de documentos\n");
    scanf("%d",&cant_documentos);
    printf("Introduzca el tamaño de los documentos\n");
    scanf("%f",&tam_documentos);
    printf("Introduzca la cantidad de Imagenes \n");
    scanf("%d",&cant_imagenes);
    printf("Introduzca el tamaño de las Imagenes \n");
    scanf("%f",&tam_imagenes);
    printf("Introduzca la cantidad de Videos\n");
    scanf("%d",&cant_videos);
    printf("Introduzca el tamaño de los Videos\n");
    scanf("%f",&tam_videos);
    printf("Introduzca la cantidad de Programas\n");
    scanf("%d",&cant_programas);
    printf("Introduzca el tamaño de los Programas\n");
    scanf("%f",&tam_programas);
    printf("Introduzca elespacio del disco\n");
    scanf("%f",&espacio_disco);

    espacio_documentos  = cant_documentos * tam_documentos;
    espacio_imagenes = cant_imagenes * tam_imagenes;
    espacio_videos = cant_videos * tam_videos;
    espacio_programas = cant_programas * tam_programas;

    espacio_total = espacio_documentos  + espacio_imagenes + espacio_videos + espacio_programas;
    espacio_total_gb  = espacio_total/F_CONVERSION;
    porcentaje= (espacio_total_gb/espacio_disco)*100;

    printf("El espacio ocupado por los documentos es %dMB\n",espacio_documentos );
    printf("El espacio ocupado por las imagenes es %dMB\n",espacio_imagenes);
    printf("El espacio ocupado por los videos es %dMB\n", espacio_videos);
    printf("El espacio ocupado por los programas es %dMB\n",espacio_programas);
    printf("El espacio total ocupado es %dMB\n",espacio_total);
    printf("El espacio total ocupado en GB es %f\n",espacio_total_gb);
    printf("El porcentaje de disco ocupado es %.2f%%\n", porcentaje); 
    printf("El espacio total del disco es %dGB\n",espacio_disco);
    return 0;
}
