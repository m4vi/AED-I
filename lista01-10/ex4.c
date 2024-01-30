#include <stdio.h>
#include <ctype.h>


int main()
{
    char palavra[30];

    printf("Digite uma palavra: ");
    gets(palavra);

    for (int i = 0; i < 30 && palavra[i] != 0; i++)
    {
        palavra[i]=toupper(palavra[i]);
    }
    
    printf("Palavra: %s", palavra);

    return 0;
}