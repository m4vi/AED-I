#include <stdio.h>
#include "Conversao.h"
int main()
{
    float polegadas, conversao;
    do
    {
        printf("\nDigite o valor em polegadas: ");
        scanf("%f", &polegadas);

        if (polegadas <= 0)
        {
            break;
        }

        conversao = Conversao(polegadas);
        printf("\n%f", conversao);
        
    } while (polegadas > 0);

    return 0;
}
