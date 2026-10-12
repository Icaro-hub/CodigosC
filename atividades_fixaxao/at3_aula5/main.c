#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, acumuladora;

    printf("Ola! Aqui se trata de uma soma apenas com a quantidade n de numeros dentro de um loop!\n");

    printf("Digite a quantidade de vezes que ira somar: ");
    scanf("%d", &n);

    acumuladora = 0;

    for (i = 1; i <= n; i++)
    {
        acumuladora = acumuladora + i;
    }

    printf("Resultado final de toda a somatória: %d", acumuladora);

    return 0;
}
