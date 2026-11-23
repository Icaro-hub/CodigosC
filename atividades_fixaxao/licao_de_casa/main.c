#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    double matriz1[5], matriz2[5], produto_interno;

    printf("Ola! Este programa ira calcular o produto interno de dois vetores!\n");

    for (i = 0; i < 5; i++)
    {
        printf("Digite o numero da casa %d: ", i);
        scanf("%lf", &matriz1[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("Digite o numero da casa %d do segundo array: ", i);
        scanf("%lf", &matriz2[i]);
    }

    produto_interno = 0.0;
    for (i = 0; i < 5; i++)
    {
        produto_interno = produto_interno + (matriz1[i] * matriz2[i]);
        printf("%.2lf\n", produto_interno);
    }

    return 0;
}
