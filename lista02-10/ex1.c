#include <stdio.h>
#define TAM 10
#define fo 10
int main()
{
    int vetorA[TAM], vetorB[TAM], vetorC[20];
    int cont = 0, k = 0;

    printf("Vamos preencher o primeiro vetor. ");
    for (int i = 0; i < fo; i++)
    {
        scanf("%d", &vetorA[i]);
    }

    printf("vamos escolher o segundo vetor. ");
    for (int i = 0; i < fo; i++)
    {
        scanf("%d", &vetorB[i]);
    }

    for (int i = 0; i < fo; i++) // vetor A
    {
        cont = 0;
        for (int l = 0; l < fo; l++) // vetor B
        {
            if (vetorA[i] == vetorB[l]) // verifica de o valor do vetorA na posicao i é igual a algum valor de b
            {
                cont++;
                //printf("\nvalor %d igual", vetorA[i]);
            }
        }

        if (cont == 0) // se NAO tiver algum numero igual
        {
            vetorC[k] = vetorA[i];
            k++;
            //printf("\nvalor colocado no vetor C: %d", vetorA[i]);
        }
    }
    for (int i = 0; i < fo; i++)
    {
        vetorC[k] = vetorB[i];
        k++;
        //printf("\nvalor colocado no vetor C: %d", vetorB[i]);
    }

    printf("vetor C: ");
    for (int i = 0; i < k; i++)
    {
        printf("\n%d", vetorC[i]);
    }
    
    return 0;
}