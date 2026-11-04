#include <stdio.h>

int main()
{

    int residuo = 0;
    int a = 0;

    printf("Ingrese un número entero positivo\n");
    scanf("%d",&a);

    residuo = a%7;
    if (residuo == 0 && a > 0 )
    {
        printf("El número es múltiplo de 7\n");
    }
    else
    {
        printf("El número no es múltiplo de 7\n");
    }
    
    if (residuo%2 == 0)
    {
        printf("El residuo es par\n");
    }
    else
    {
        printf("El residuo es impar\n");
    }
    
    
    
    return 0;
}
