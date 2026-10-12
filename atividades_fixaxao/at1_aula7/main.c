#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n, i, j;

    printf("Ola! Este codigo ira imprimir uma quantidade n de numeros em n linhas\n");

    printf("Digite um numero: ");
    scanf("%u", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%u", j);
        }

        printf("\n");
    }

    return 0;
}
