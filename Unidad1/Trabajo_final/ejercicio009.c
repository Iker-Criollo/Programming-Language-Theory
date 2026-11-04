#include <stdio.h>
#include <stdbool.h>

int main()
{
    float IVA = 0.15;
    float precio = 0.0;
    float subtotal = 0.0;
    float monto_iva = 0.0;
    float total = 0.0;
    float bono = 0.0;
    int cantidad = 0;
    bool valido = false;

    printf("Ingrese el precio del producto\n");
    scanf("%f",&precio);
    printf("Ingrese la cantidad de productos\n");
    scanf("%d",&cantidad);

    if (precio >= 0 && cantidad >= 0)
    {
        subtotal = precio * cantidad;
        monto_iva = subtotal * IVA;
        total = subtotal + monto_iva;
        if (total > 0 )
        {
            bono = total * 1.5;
        }
        else
        {
            bono = 0;
        }
    

        printf("Precio unitario: %.2f\n", precio);
        printf("Cantidad de productos: %d\n", cantidad);
        printf("Subtotal: %.2f\n", subtotal);
        printf("IVA aplicado: %.2f\n", monto_iva);
        printf("Total a pagar: %.2f\n", total);
        printf("Resultado de total > 0: %d\n", valido);
        printf("Total multiplicado por 1.5: %.2f\n", bono);
    }
    else
    {
        printf("Error: el precio y la cantidad no pueden ser negativos\n");
    }

    return 0;
}
