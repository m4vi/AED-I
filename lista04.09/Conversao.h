#include <stdio.h>
#define metro 1
#define centimetro 2
#define jarda 3
#define pe 4

float Conversao(float comprimento)
{
    int escolha;
    float result = 0;
    printf("Sendo 1 para metro ");
    printf("2 para centimetro ");
    printf("3 para jarda ");
    printf("4 para pe ");
    printf("Digite sua escolha: ");
    scanf("%i", &escolha);

    switch (escolha)
    {
    case metro:
        result = comprimento / 39.37;
        break;
    case centimetro:
        result = comprimento * 2.54;
        break;
    case jarda:
        result = comprimento / 36;
        break;
    case pe:
        result = comprimento / 12;
        break;
    default:
        printf("Opcao invalida. ");
        break;
    }
    return result;
}