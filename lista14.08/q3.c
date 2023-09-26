#include <stdio.h>
// #define DEPOSITAR 1
// #define CONSULTAR_O_EXTRATO_EM_CONTA 2
// #define SACAR_DINHEIRO 3
int main()
{
    int transacao, senha, aux_senha, cont_tentativas;
    float deposito, dinheiro_conta = 0.0, saque;
    printf("Defina uma senha: (De quatro numeros inteiros) ");
    scanf("%i", &senha);
    do
    {
        printf("\nConsidere 1 para Depositar");
        printf("\n2 para consultar o extrato da conta ");
        printf("\n3 para sacar dinheiro");
        printf("\nDigite a transacao: ");
        scanf("%d", &transacao);

        if (transacao == -1)
        {
            break;
        }

        if (transacao == 1)
        {
            printf("\nDigite o valor a depositar: ");
            scanf("%f", &deposito);
            dinheiro_conta += deposito;
        }
        else if (transacao == 2)
        {
            cont_tentativas = 0;
            do
            {
                printf("\nDigite sua senha para confirmar a transacao: ");
                scanf("%d", &aux_senha);
                cont_tentativas++;
                if (aux_senha == senha)
                {
                    printf("Extrato em conta: %.2f\n", dinheiro_conta);
                }
            } while ((aux_senha != senha) && (cont_tentativas < 3));
            if ((cont_tentativas == 3) && (aux_senha != senha))
            {
                printf("\nSua conta foi bloqueada");
                break;
            }
        }
        else if (transacao == 3)
        {
            cont_tentativas = 0;
            do
            {
                printf("\nDigite sua senha para confirmar a transacao: ");
                scanf("%d", &aux_senha);
                cont_tentativas++;
                if (aux_senha == senha)
                {
                    printf("\nDigite a quantia que deseja sacar: ");
                    scanf("%f", &saque);
                    if (dinheiro_conta >= saque)
                    {
                        dinheiro_conta -= saque;
                    }
                    else
                    {
                        printf("\nSaldo insulficiente ");
                    }
                }
            } while ((aux_senha != senha) && (cont_tentativas < 3));
            if ((cont_tentativas == 3) && (aux_senha != senha))
            {
                printf("\nSua conta foi bloqueada");
                break;
            }
        }
        else
        {
            printf("Transacao invalida ");
        }
    } while (transacao != -1);

    return 0;
}