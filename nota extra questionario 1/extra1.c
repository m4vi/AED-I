#include <stdio.h>

int main()
{
    int escolha, quantidade;
    float valor_total;

    printf("Digite o tipo: Tipo 1 -  combo 1 ");
    printf("Digite o tipo: Tipo 2 - combo 2 ");
    printf("Digite o tipo: Tipo 3 - combo 3 ");

    scanf("%d", &escolha);

    printf("Digite a quantidade desejada: ");
    scanf("%d", &quantidade);

    if (escolha == 1 || escolha == 2 || escolha == 3)
    {
        if (escolha == 1)
        {
            valor_total = quantidade * 28.9;
            printf("Valor a pagar: %.2f", valor_total);
        }
        if (escolha == 2)
        {
            valor_total = quantidade * 33.90;
            if (valor_total > 100)
            {
                valor_total = valor_total * 0.9;
                printf("O valor total da sua compra eh: R$%.2f com desconto", valor_total);
            }
            else
            {
                printf("O valor total da sua compra eh: R$%.2f", valor_total);
            }
        }
        if (escolha == 3)
        {
            valor_total = quantidade * 36.9;
            if (valor_total > 100)
            {
                valor_total = valor_total * 0.9;
                printf("O valor total da sua compra eh: R$%.2f com desconto", valor_total);
            }
            else
            {
                printf("O valor total da sua compra eh: R$%.2f", valor_total);
            }
        }
    }
    else
    {
        printf("Opcao invalida");
    }
    return 0;
}