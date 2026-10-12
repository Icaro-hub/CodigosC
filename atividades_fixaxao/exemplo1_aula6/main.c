#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, div, indicador;

    printf("Ola! Este programa ira definir se um determinado numero pode ou nao ser primo!");

    printf("Digite um numero: ");
    scanf("%d", &n);

    div = 2;
    indicador = 1;

    while(div<= n - 1)
    {
        if(n % div == 0)
        {
            indicador = 0;

        }
        div++;
    }
    if(indicador)
    {
        printf("Este numero pode ser considerado primo\n");
    } else
    {
        printf("Este numero nao pode ser primo");
    }

    return 0;
}
