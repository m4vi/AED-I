#include <stdio.h>
#define TAM 15
#define fo 10
int main()
{
    double peso_gado[TAM], numerador = 0, media;

    for (int i = 0; i < 15; i++)
    {
        printf("Digite o peso: ");
        scanf("%lf", &peso_gado[i]);
    }
    
    for (int i = 0; i < 15; i++)
    {
        numerador += peso_gado[i];
    }
    
    media = numerador / 15;

    printf("Pesos abaixo da media.");
    for (int i = 0; i < 15; i++)
    {
        if (peso_gado[i] < media)
        {
            printf("\n%lf", peso_gado[i]);
        } 
    }
    
    return 0;
}