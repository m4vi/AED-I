#include <stdio.h>
#define linha_define 7
#define coluna_define 11
int main()
{
    double matriz[linha_define][coluna_define];
    double maior, somatorio_dia;
    int linha_maior = 0;

    for (int linha = 0; linha < 7; linha++) // leitura da matriz
    {
        somatorio_dia = 0;
        for (int coluna = 0; coluna < 10; coluna++)
        {
            printf("Posicao [%d][%d]: ", linha, coluna);
            scanf("%lf", &matriz[linha][coluna]);
            somatorio_dia += matriz[linha][coluna];
        }
        matriz[linha][10] = somatorio_dia / 10; // isso aq é pq o vetor comeca com 0
    }

    printf("Media: ");
    for (int linha = 0; linha < 7; linha++)
    {
        printf("%lf\n", matriz[linha][10]);
    }
    

    maior = matriz[0][10];
    linha_maior = 0;
    for (int linha = 0; linha < 7; linha++) //
    {
        if (matriz[linha][10] > maior)
        {
            maior = matriz[linha][10];
            linha_maior = linha;
        }
    }

    printf("\nCompra1\tCompra2\tCompra3\tCompra4\tCompra5\tCompra6\tCompra7\tCompra8\tCompra9\tCompra10\tMedia\n");

    for (int linha = 0; linha < 7; linha++)
    {
        for (int coluna = 0; coluna < 11; coluna++)
        {
            printf("%.2lf\t", matriz[linha][coluna]);
        }
        printf("\n");
    }
    
    
    printf("Maior media de todas Posicao[%d]: %.2lf", linha_maior, maior);

    return 0;
}