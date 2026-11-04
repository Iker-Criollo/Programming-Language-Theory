#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    
    int LONGITUD_TARJETA = 16;
    int MODULO = 10;

    char tarjeta[17];
    int suma = 0;
    int digito = 0;
    int digito_doble = 0;
    int minimo = 0;
    bool tarjeta_valida = false;
    int cont_operaciones = 0;
    
    printf("Ingrese el numero de tarjeta de credito (16 digitos)\n");
    fgets(tarjeta,sizeof(tarjeta),stdin);

    if (strlen(tarjeta) == LONGITUD_TARJETA)
    {
        suma = 0;

        
        digito = tarjeta[0] - '0';
        digito_doble = digito * 2;
        if (digito_doble > 9)
        {
            digito_doble -= 9;
        }
        suma += digito_doble;
        cont_operaciones +=1;
        
        digito = tarjeta[1] - '0';
        suma +=digito;
        cont_operaciones +=1;
        
        digito = tarjeta[2] - '0';
        digito_doble = digito * 2;
        if (digito_doble > 9)
        {
            digito_doble -= 9;
        }
        suma += digito_doble;
        cont_operaciones +=1;
        
        digito = tarjeta[3] - '0';
        suma +=digito;
        cont_operaciones +=1;
        
        digito = tarjeta[4] - '0';
        digito_doble = digito * 2;
        if (digito_doble > 9)
        {
            digito_doble -= 9;
        }
        suma += digito_doble;
        cont_operaciones +=1;
        
        digito = tarjeta[5] - '0';
        suma +=digito;
        digito = tarjeta[6] - '0';
        digito_doble = digito * 2;
        if (digito_doble > 9)
        {
            digito_doble -= 9;
        }
        suma += digito_doble;
        cont_operaciones +=1;
        
        digito = tarjeta[7] - '0';
        suma +=digito;
        digito = tarjeta[8] - '0';
        digito_doble = digito * 2;
        if (digito_doble > 9)
        {
            digito_doble -= 9;
        }
        suma += digito_doble;
        cont_operaciones +=1;
        
        digito = tarjeta[9] - '0';
        suma +=digito;
        digito = tarjeta[10] - '0';
        digito_doble = digito * 2;
        if (digito_doble > 9)
        {
            digito_doble -= 9;
        }
        suma += digito_doble;
        cont_operaciones +=1;
        
        digito = tarjeta[11] - '0';
        suma +=digito;
        digito = tarjeta[12] - '0';
        digito_doble = digito * 2;
        if (digito_doble > 9)
        {
            digito_doble -= 9;
        }
        suma += digito_doble;
        cont_operaciones +=1;
        
        digito = tarjeta[13] - '0';
        suma +=digito;
        cont_operaciones +=1;
        
        digito = tarjeta[14] - '0';
        digito_doble = digito * 2;
        if (digito_doble > 9)
        {
            digito_doble -= 9;
        }
        suma += digito_doble;
        cont_operaciones +=1;
        
        digito = tarjeta[15] - '0';
        suma +=digito;
        cont_operaciones +=1;
        
        tarjeta_valida = (suma % MODULO) == 0;

        if (tarjeta_valida == true)
        {
            printf("La tarjeta es valida\n");
        }
        else
        {
            printf("La tarjeta no es valida\n");
        }
        
        minimo = suma;
        if (digito < minimo)
        {
            minimo = digito;
            cont_operaciones +=1;
        }
        if (digito_doble < minimo)
        {
            minimo = digito_doble;
            cont_operaciones +=1;
        }
        if (MODULO < minimo)
        {
            minimo = MODULO;
            cont_operaciones +=1;
        }
        if (LONGITUD_TARJETA < minimo)
        {
            minimo = LONGITUD_TARJETA;
            cont_operaciones +=1;
        }
        
        printf("El valor minimo de las variables utilizadas es %d\n",minimo);
        
        
        
        
    }
    else
    {
        printf("Error: la tarjeta debe tener 16 digitos\n");
    }
    

    return 0;
}
