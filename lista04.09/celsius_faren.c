#include <stdio.h>
#include "Cels_fahren.h"


int main()
{
    float temperatura;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &temperatura);

    temperatura = ConvFahren(temperatura);
    printf("Temperatura em Fahrenheit: %.2f", temperatura);

    return 0;
}