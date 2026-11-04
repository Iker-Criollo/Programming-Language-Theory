#include <stdio.h>

int main()
{
    int TRAMO_1 = 10000;
    int TRAMO_2 = 30000;
    int TRAMO_3 = 60000;
    float TASA_1 = 0.10;
    float TASA_2 = 0.15;
    float TASA_3 = 0.20;
    float TASA_4 = 0.30;

    float ingreso = 0.0;
    float impuesto1 = 0.0;
    float impuesto2 = 0.0;
    float impuesto3 = 0.0;
    float impuesto4 = 0.0;
    float impuesto_total = 0.0;
    float minimo = 0.0;

    printf("Ingrese el ingreso anual\n");
    scanf("%f",&ingreso);

    if (ingreso < 0)
    {
        printf("Error: el ingreso no puede ser negativo\n");
    }

    else
    {
        if (ingreso <= TRAMO_1)
        {
            impuesto1 = ingreso * TASA_1;
        }
        else if (ingreso <= TRAMO_2)
        {
            impuesto1 = ingreso * TASA_1;
            impuesto2 = (ingreso - TRAMO_1) * TASA_2;
        }
        else if (ingreso <= TRAMO_3)
        {
            impuesto1 = ingreso * TASA_1;
            impuesto2 = (TRAMO_2 - TRAMO_1) * TASA_2;
            impuesto3 = (ingreso - TRAMO_2) * TASA_3;
        }
        else
        {
            impuesto1 = ingreso * TRAMO_1;
            impuesto2 = (TRAMO_2 - TRAMO_1) * TASA_2;
            impuesto3 = (TRAMO_3 - TRAMO_2) * TASA_3;
            impuesto4 = (ingreso - TRAMO_3) * TASA_4;
        }
        
        impuesto_total = impuesto1 + impuesto2 + impuesto3 + impuesto4;
        
        minimo = ingreso;

        if (impuesto1 < minimo)
        {
            minimo = impuesto1;
        }
        if (impuesto2 < minimo)
        {
            minimo = impuesto2;
        }
        if (impuesto3 < minimo)
        {
            minimo = impuesto3;
        }
        if (impuesto4 < minimo)
        {
            minimo = impuesto4;
        }
        if (impuesto_total < minimo)
        {
            minimo = impuesto_total;
        }
        
        printf("El impuesto del tramo 1 es %.2f\n",impuesto1);
        printf("El impuesto del tramo 2 es %.2f\n",impuesto2);
        printf("El impuesto del tramo 3 es %.2f\n",impuesto3);
        printf("El impuesto del tramo 4 es %.2f\n\n",impuesto4);
        printf("El impuesto total es %.2f\n",impuesto_total);
        printf("El valor minimo de las variables utilizadas es %.2f\n",minimo);


        
        
    }
    
    

    return 0;
}
