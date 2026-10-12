#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int ano;

    printf("Bissexto ou nao bissexto: eis a questao\n");

    printf("Digite o ano: ");
    scanf("%u", &ano);

    if (ano % 400 == 0 )
    {
        printf("O ano %u e bissexto por ser multiplo de 400 =D", ano);
    } else if (ano % 4 == 0 && ano % 100 != 0)
    {
        printf("O ano %u e bissexto por ser multiplo de 4 e nao multiplo de 100 =)", ano);
    } else
    {
        printf("O ano %u nao pode ser bissexto =(", ano);
    }

    return 0;
}
