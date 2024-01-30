#include <stdio.h>

int main()
{
    int matriz[5][5], maior; // linha  Coluna

    for (int linha = 0; linha < 5; linha++) // leitura da matriz
    {
        for (int coluna = 0; coluna < 5; coluna++)
        {
            scanf("%d", &matriz[linha][coluna]);
        }
    }
    maior = matriz[0][0];
    for (int linha = 0; linha < 5; linha++) 
    {
        for (int coluna = 0; coluna < 5; coluna++)
        {
            if (matriz[linha][coluna] > maior)
            {
                maior = matriz[linha][coluna];
            }

            //printf("Posicao maior Atual: [%d][%d]: %d\n", linha, coluna, maior);
        }
    }

    printf("Maior de todos: %d", maior);

    return 0;
}