#include <stdio.h>

int main()
{
    int num, cont5_15 = 0, cont32_45 = 0, cont = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if ((num >= 5) && (num <= 15))
        {
            cont5_15++;
        }
        else if ((num >= 32) && (num <= 45))
        {
            cont32_45++;
        }
        else
        {
            cont++;
        }
    }
    printf("Existem %d valores no intervalo [5,15]\n", cont5_15);
    printf("Existem %d valores no intervalo [5,15]\n", cont32_45);
    printf("Existem %d valores fora do intervalo previsto\n", cont);
    return 0;
}