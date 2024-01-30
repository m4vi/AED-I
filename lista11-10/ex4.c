#include <stdio.h>

int main()
{
    double matriz[3][7];
    double soma_colunas_pares = 0, soma_colunas_impares = 0;
    double soma_linhas_pares = 0, media_linhas_pares;
    int cont_linhas_pares = 0;

    for (int linha = 0; linha < 3; linha++)
    {
        for (int coluna = 0; coluna < 3; coluna++)
        {
            printf("Posicao [%d][%d]: ", linha, coluna);
            scanf("%lf", &matriz[linha][coluna]);
        }
    }

    for (int linha = 0; linha < 3; linha++)
    {
        for (int coluna = 0; coluna <3; coluna++)
        {
            if (coluna % 2 == 0)
            {
                soma_colunas_pares += matriz[linha][coluna];
            }
            else if (coluna % 2 != 0)
            {
                soma_colunas_impares += matriz[linha][coluna];
            }

            if (linha % 2 == 0)
            {
                cont_linhas_pares++;
                soma_linhas_pares += matriz[linha][coluna];
            }
        }
    }

    media_linhas_pares = soma_linhas_pares/cont_linhas_pares;    

    printf("\nQuestao A: %lf", soma_colunas_pares);
    printf("\nQuestao B: %lf", soma_colunas_impares);
    printf("\nQuestao C: %lf", media_linhas_pares);
    return 0;
}