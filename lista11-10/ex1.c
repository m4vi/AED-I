#include <stdio.h>

int main()
{
    int matriz[4][4];

    for (int linha = 0; linha < 4; linha++)
    {
        for (int coluna = 0; coluna < 4; coluna++)
        {
            printf("Posicao [%d][%d]: ", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
        }
    }
    int a = 0, b = 0, c = 1;

    for (int linha = 0; linha < 4; linha++)
    {
        for (int coluna = 0; coluna < 4; coluna++)
        {
            if (linha < coluna)
            {
                a += matriz[linha][coluna];
            }
            else if (linha > coluna)
            {
                b += matriz[linha][coluna];
            }
            else
            {
                c *= matriz[linha][coluna];
            }
        }
    }
    printf("\nquestao a: %d", a);
    printf("\nquestao b: %d", b);
    printf("\nquestao c: %d", c);

    return 0;
}