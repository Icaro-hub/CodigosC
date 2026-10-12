#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int acumulador, n, i, antes, depois;

    printf("Funcao: Fazer com que os numeros fiquem em ordem, utilizando saida de verdadeira ou falsa!\n");

    printf("Digite a quantidade de numeros que irao ser ordenados: ");
    scanf("%u", &n);

    acumulador = 1;//assumindo valor do acumulador como verdadeiro, ou seja, em ordem.

    for(i = 1; i <= n; i++)
    {
        printf("\nDigite um numero: ");
        scanf("%u", &depois);

        if ((depois < antes) && i>1)
        {
            acumulador = 0;//significa que, em caso de desordem, ou seja, número que seja menor que antes, vai dar falso!
            break;
        }

        antes = depois;
    }

    if(acumulador)
    {
        printf("Esta ordenado! =)");
    } else
    {
        printf("Nao esta ordenado! =(");
    }

    return 0;
}
