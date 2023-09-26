#include <stdio.h>
double saldoConta = 0;
int senhaCadastro;

int contaDigitos(int numero)
{
    int contador = 0;

    while (numero != 0)
    {
        numero /= 10;
        contador++;
    }
    return contador;
}

void Deposito()
{
    double valorDeposito = 0;
    printf("Digite o valor do deposito: ");
    scanf("%lf", &valorDeposito);
    saldoConta += valorDeposito;
}

void Extrato()
{
    int senhaTentativa, tentativas;
   do
            {
                printf("Digite a sua senha: ");
                scanf("%d", &senhaTentativa);
                tentativas++;
                if (senhaCadastro == senhaTentativa)
                {
                    printf("O saldo eh: %.2lf", saldoConta);
                }
                else if ((senhaCadastro != senhaTentativa) && (tentativas == 3))
                {
                    printf("Senha invalida, sua conta foi bloqueada");
                    // flagSenha=1;
                    // break;
                    return 0;
                }
                else
                {
                    printf("Senha invalida\n");
                }

            } while (senhaCadastro != senhaTentativa); 
}

void Saque()
{
    int senhaTentativa, tentativas;
    double valorSaque;
    do
            {
                printf("Digite a sua senha: ");
                scanf("%d", &senhaTentativa);
                tentativas++;
                if (senhaCadastro == senhaTentativa)
                {
                    printf("Digite o valor a ser sacado: ");
                    scanf("%lf", &valorSaque);

                    if (valorSaque <= saldoConta)
                    {
                        saldoConta -= valorSaque;
                    }
                    else
                    {
                        printf("Saldo insuficiente");
                    }
                }
                else if ((senhaCadastro != senhaTentativa) && (tentativas == 3))
                {
                    printf("Senha invalida, sua conta foi bloqueada");
                    // flagSenha=1;
                    // break;
                    return 0;
                }
                else
                {
                    printf("Senha invalida\n");
                }

            } while (senhaCadastro != senhaTentativa);
}
int main()
{

    int qtdDigitos, operacao, flagSenha = 0;
    double valorSaque = 0;

    do
    {
        printf("\nDigite uma senha de 4 digitos: ");
        scanf("%d", &senhaCadastro);

        qtdDigitos = contaDigitos(senhaCadastro);

        if (qtdDigitos != 4)
        {
            printf("\nVoce digitou uma senha invalida");
        }
        else
        {
            printf("\nSenha cadastrada com sucesso");
        }

    } while (qtdDigitos != 4);

    printf("\nDigite 1 para DEPOSITAR\n");
    printf("Digite 2 para EXTRATO\n");
    printf("Digite 3 para SACAR\n");
    scanf("%d", &operacao);

    while (operacao != -1)
    {
        flagSenha = 0;
        if (operacao == 1)
        {
            Deposito();
        }
        else if (operacao == 2)
        {
            Extrato();
        }
        else if (operacao == 3)
        {
            Saque();
        }
        else
        {
            printf("operacao invalida\n");
        }

        // if (flagSenha != 1){
        printf("\nDigite qual operacao deseja realizar: ");
        scanf("%d", &operacao);
        //}
        // else {
        //   break;
        //}
    }
}
