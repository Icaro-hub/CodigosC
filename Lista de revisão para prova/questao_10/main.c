#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int dia1, dia2, mes1, mes2, ano1, ano2;

    printf("Comparacao de anos: quem e maior cronologicamente?\n");

    printf("Dia 1: ");
    scanf("%u", &dia1);

    printf("Dia 2: ");
    scanf("%u", &dia2);

    printf("Mes 1: ");
    scanf("%u", &mes1);

    printf("Mes 2: ");
    scanf("%u", &mes2);

    printf("Ano 1: ");
    scanf("%u", &ano1);

    printf("Ano 2: ");
    scanf("%u", &ano2);

    printf("Ano 1: %u / %u / %u\n", dia1, mes1, ano1);
    printf("Ano 2: %u / %u / %u\n", dia2, mes2, ano2);

    if (ano1 > ano2)
    {
        printf("Ano um cronologicamente maior. FATOR ANO");
    } else if (ano1 < ano2)
    {
        printf("Ano dois cronologicamente maior. FATOR ANO");
    } else if (mes1 > mes2)
    {
        printf("Ano um cronologicamente. FATOR MES");
    } else if (mes1 < mes2)
    {
        printf("Ano dois maior cronologicamente. FATOR MES");
    } else if (dia1 > dia2)
    {
        printf("Ano um maior cronologicamente. FATOR DIA");
    } else
    {
        printf("Ano dois maior cronologicamente. FATOR DIA");
    }

    return 0;
}
