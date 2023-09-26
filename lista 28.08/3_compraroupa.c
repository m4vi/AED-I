#include <stdio.h>

float pix(float preco)
{
    float v = 0;
    v = preco * 0.9;
    return v;
}
float debito(float preco)
{
    float v = 0;
    v = preco * 0.95;
    return v;
}
float vista_credito(float preco)
{
    float v = 0;
    v = preco * 0.98;
    return v;
}
float parcelado_credito(float preco)
{
    float v = 0;
    v = preco;
    return v;
}
int main()
{
    int codigo;
    float preco, v = 0;
    printf("Para o tipo de pagamento digite: 1 para pix, 2 para cartao de debito, 3 para a vista no cartao de credito e 4 para parcelado no cartao de credito:\n");
    do
    {
        printf("Digite o codigo: ");
        scanf("%d", &codigo);

        if ((codigo != 1) && (codigo != 2) && (codigo != 3) && (codigo != 4))
        {
            break;
        }

        printf("Digite o preco original:\n");
        scanf("%f", &preco);

        if ((codigo == 1))
        {
            v += pix(preco);
        }
        else if (codigo == 2)
        {
            v += debito(preco);
        }
        else if (codigo == 3)
        {
            v += vista_credito(preco);
        }
        else if (codigo == 4)
        {
            v += parcelado_credito(preco);
        }

    } while ((codigo == 1) || (codigo == 2) || (codigo == 3) || (codigo == 4));

    printf("Valor a pagar: %.2f", v);
    return 0;
}