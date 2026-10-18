#include <stdio.h>

int cant_doc = 0;
int cant_ima = 0;
int cant_vid = 0;
int cant_pro = 0;
float tam_doc = 0.0;
float tam_ima = 0.0;
float tam_vid = 0.0;
float tam_prog = 0.0;
float espacio_disco = 0;
int espacio_doc  = 0;
int espacio_ima = 0;
int espacio_vid = 0;
int espacio_prog = 0;
int espacio_total = 0;
float espacio_total_gb = 0;
float porcentaje = 0.0;

const float CONVERSION_GB_A_MB = 1024;

int main()
{
    printf("Introduzca la cantidad de documentos\n");
    scanf("%d",&cant_doc);
    printf("Introduzca el tamaño de los documentos\n");
    scanf("%f",&tam_doc);
    printf("Introduzca la cantidad de Imagenes \n");
    scanf("%d",&cant_ima);
    printf("Introduzca el tamaño de las Imagenes \n");
    scanf("%f",&tam_ima);
    printf("Introduzca la cantidad de Videos\n");
    scanf("%d",&cant_vid);
    printf("Introduzca el tamaño de los Videos\n");
    scanf("%f",&tam_vid);
    printf("Introduzca la cantidad de Programas\n");
    scanf("%d",&cant_pro);
    printf("Introduzca el tamaño de los Programas\n");
    scanf("%f",&tam_prog);
    printf("Introduzca elespacio del disco\n");
    scanf("%f",&espacio_disco);

    espacio_doc  = cant_doc * tam_doc;
    espacio_ima = cant_ima * tam_ima;
    espacio_vid = cant_vid * tam_vid;
    espacio_prog = cant_pro * tam_prog;

    espacio_total = espacio_doc  + espacio_ima + espacio_vid + espacio_prog;
    espacio_total_gb  = espacio_total/CONVERSION_GB_A_MB;
    porcentaje= (espacio_total_gb/espacio_disco)*100;

    printf("El espacio ocupado por los documentos es %dMB\n",espacio_doc );
    printf("El espacio ocupado por las imagenes es %dMB\n",espacio_ima);
    printf("El espacio ocupado por los videos es %dMB\n", espacio_vid);
    printf("El espacio ocupado por los programas es %dMB\n",espacio_prog);
    printf("El espacio total ocupado es %dMB\n",espacio_total);
    printf("El espacio total ocupado en GB es %f\n",espacio_total_gb);
    printf("El porcentaje de disco ocupado es %.2f%%\n", porcentaje); 
    printf("El espacio total del disco es %dGB\n",espacio_disco);
    return 0;
}
