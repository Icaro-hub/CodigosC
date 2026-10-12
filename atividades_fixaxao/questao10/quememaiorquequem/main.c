#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int dia1, mes1, ano1, dia2, mes2, ano2;

    printf("dia 1 : ");
    scanf("%u", &dia1);
    printf("mes 1: ");
    scanf("%u", &mes1);
    printf("ano 1: ");
    scanf("%u", &ano1);


    printf("dia 2: ");
    scanf("%u", &dia2);
    printf("mes 2: ");
    scanf("%u", &mes2);
    printf("ano 2: ");
    scanf("%u", &ano2);

    if (dia1 >= dia2 || mes1 || mes2 || ano1 || ano2)
    {
        printf("O ano um e maior, cronologicamente, que o ano dois. %u / %u / %u", dia1, mes1, ano1);
    } else
    {
        printf("O ano dois e maior, cronologicamente, que o ano um. %u / %u / %u", dia2, mes2, ano2);
    }

    return 0;
}
