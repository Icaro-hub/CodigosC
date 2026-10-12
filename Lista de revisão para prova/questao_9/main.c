#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int ano;

    printf("Ola! Este programa ira verificar se determinado ano comprova ser bissexto ou nao.\n");

    printf("Ano a ser analisado: ");
    scanf("%u", &ano);

    if (ano % 400 == 0)
    {
        printf("%u: Ano bissexto por ser multiplo de 400", ano);
    } else if (ano % 4 == 0 && ano % 100 != 0)
    {
        printf("%u: Ano bissexto por ser multiplo de 4 e nao multiplo de 100", ano);
    } else
    {
        printf("%u: Ano NAO bissexto", ano);
    }

    return 0;
}
