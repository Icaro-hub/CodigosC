#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n;
    int i, divisor;

    printf("Objetivo deste programa: Pegar um valor n e ver, de 2 a n, quais sao os numeros multiplos dele!\n");

    printf("Numero limite: \n");
    scanf("%u", &n);

    for (i = 0; i <= n; i++)
    {
        printf("Digite um numero: \n");
        scanf("%d", &divisor);
        if (n % divisor != 0)
        {
            continue;
        }

        printf("Numeros divisores: %d\n", divisor);

        if (divisor == n)
        {
            break;
        }
    }

    return 0;
}
