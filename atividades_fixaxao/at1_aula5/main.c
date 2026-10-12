#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n;

    printf("Digite a quantidade de vezes que ira ocorrer dentro da somatoria: ");
    scanf("%d", &n);

    j = 0;

    for(i = 1; i <= n; i++)
    {
        j = j + i;
        printf("Resultado da soma parcial: %d\n", j);
    }

    printf("Resultado da soma total: %d", j);

    return 0;
}
