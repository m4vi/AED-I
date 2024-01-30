#include <stdio.h>

int main()
{

    int matrizA[3][3], matrizB[3][3], matrizC[3][3];

    printf("Matriz A\n");
    for (int linha = 0; linha < 3; linha++)
    {
        for (int coluna = 0; coluna < 3; coluna++)
        {
            printf("Posicao [%d][%d]: ", linha, coluna);
            scanf("%d", &matrizA[linha][coluna]);
        }
    }
    printf("Matriz B\n");
    for (int linha = 0; linha < 3; linha++)
    {
        for (int coluna = 0; coluna < 3; coluna++)
        {
            printf("Posicao [%d][%d]: ", linha, coluna);
            scanf("%d", &matrizB[linha][coluna]);
        }
    }

    for (int linha = 0; linha < 3; linha++)
    {
        for (int coluna = 0; coluna < 3; coluna++)
        {
            if (matrizA[linha][coluna] > matrizB[linha][coluna])
            {
                matrizC[linha][coluna] = matrizA[linha][coluna];
            }
            else if (matrizB[linha][coluna] > matrizA[linha][coluna])
            {
                matrizC[linha][coluna] = matrizB[linha][coluna];
            }
        }
    }

    printf("Matriz A\n");
    for (int linha = 0; linha < 3; linha++)
    {
        for (int coluna = 0; coluna < 3; coluna++)
        {
            printf("%d\t", matrizA[linha][coluna]);
        }
        printf("\n");
    }

    printf("Matriz B\n");
    for (int linha = 0; linha < 3; linha++)
    {
        for (int coluna = 0; coluna < 3; coluna++)
        {
            printf("%d\t", matrizB[linha][coluna]);
        }
        printf("\n");
    }

    printf("Matriz C\n");
    for (int linha = 0; linha < 3; linha++)
    {
        for (int coluna = 0; coluna < 3; coluna++)
        {
            printf("%d\t", matrizC[linha][coluna]);
        }
        printf("\n");
    }
    return 0;
}