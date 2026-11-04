#include <stdio.h>
#include <string.h>

int main()
{
    int VOTOS_MIN = 0;
    float MAYORIA_ABSOLUTA = 0.5;

    int votos_a = 0;
    int votos_b = 0;
    int votos_c = 0;
    int total_votos = 0;
    int minimo = 0;
    char ganador[30];

    printf("Ingrese los votos por el candidato A\n");
    scanf("%d",&votos_a);
    printf("Ingrese los votos por el candidato B\n");
    scanf("%d",&votos_b);
    printf("Ingrese los votos por el candidato C\n");
    scanf("%d",&votos_c);

    if (votos_a >= VOTOS_MIN && votos_b >= VOTOS_MIN && votos_c >= VOTOS_MIN)
    {
        total_votos = votos_a + votos_b + votos_c;

        if (total_votos == 0)
        {
            printf("No se registraron los votos\n");
        }
        else if (votos_a > votos_b && votos_a > votos_c)
        {
            strcpy(ganador,"Candidato A");
        }
        else if (votos_b > votos_a && votos_b > votos_c)
        {
            strcpy(ganador,"Candidato B");
        }
        else if (votos_c > votos_b && votos_c > votos_b)
        {
            strcpy(ganador,"Candidato C");
        }
        else
        {
            strcpy(ganador,"Empate");
        }

        minimo = votos_a;
        if (votos_b < minimo)
        {
            minimo = votos_b;
        }
        if (votos_c < minimo)
        {
            minimo = votos_c;
        }
        if (total_votos < minimo)
        {
            minimo = total_votos;
        }

        printf("El numero de votos por A es %d\n", votos_a);
        printf("El numero de votos por B es %d\n", votos_b);
        printf("El numero de votos por C es %d\n", votos_c);
        printf("El numero total de votos es %d\n", total_votos);
        printf("Resultado: %s\n", ganador);
        printf("El valor minimo de las variables utilizadas es %d\n",minimo);
    }

    else
    {
        printf("Error: los votos no pueden ser negativos\n");
    }
    
    
    
    return 0;
}
