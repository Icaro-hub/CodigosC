#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    double aproximacao, y;

    printf("Ola! Questao 10 da lista dois da disciplina, que calcula aproximacao de raiz quadrada por meio de formula!\n");

    printf("Qual raiz deseja calcular: ");
    scanf("%lf", &y);

    aproximacao = y / 2;

    for (i=1; i<=20; i++)
    {
        aproximacao = (aproximacao + (y / aproximacao)) / 2;

        printf("%lf ", aproximacao);
    }

    printf("Resultado final tem raiz de, apoximadamente, %lf", aproximacao);

    return 0;
}
