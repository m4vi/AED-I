#include <stdio.h>
#define tam 5
#define ifor 5
int primos(int num)
{
    int divisores = 0;
    for (int i = 1; i < (num / 2); i++)
    {
        if (num % i == 0)
        {
            divisores++;
        }
    }
    if (divisores == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int vetor[tam];

    for (int i = 0; i < ifor; i++)
    {
        printf("Digite o num: ");
        scanf("%d", &vetor[i]);
    }
    printf("Primos: ");
    for (int i = 0; i < ifor; i++)
    {
        int retorno;
        
        retorno = primos(vetor[i]);
        if (retorno == 1)
        {
            printf("\nNumero: %d Posicao: %d", vetor[i], i);
        }
    }

    return 0;
}