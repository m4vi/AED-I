#include <stdio.h>

int main()
{
    int matriz[2][2];

    for (int linha = 0; linha < 2; linha++)
    {
        for (int coluna = 0; coluna < 2; coluna++)
        {
            printf("Posicao [%d][%d]: ", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    int diagonalPrincipal = 1, diagonalSecundaria = 1;

    for (int linha = 0; linha < 2; linha++)
    {
        for (int coluna = 0; coluna < 2; coluna++)
        {
            if (linha == coluna)
            {
                diagonalPrincipal *= matriz[linha][coluna];
            }
            else if (linha != coluna)
            {
                diagonalSecundaria *= matriz[linha][coluna];
            }
        }
    }

    for (int linha = 0; linha < 2; linha++)
    {
        for (int coluna = 0; coluna < 2; coluna++)
        {
            printf("%d\t", matriz[linha][coluna]);
        }
        printf("\n");
    }
    printf("\nPrincipal %d", diagonalPrincipal);
    printf("\nSecundaria %d", diagonalSecundaria);

    int determinante;
    determinante = diagonalPrincipal - diagonalSecundaria;

    printf("Determinante: %d", determinante);
    return 0;
}