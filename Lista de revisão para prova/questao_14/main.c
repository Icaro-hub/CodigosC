#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int i, n, a, potencia;

    printf("Fazendo potencia juntamente com loop de repeticao, sem necessitar do pow\n");

    printf("Quantidade de repeticoes: ");
    scanf("%u", &n);

    printf("Qual a base: ");
    scanf("%u", &a);

    potencia = 1;

    for (i=1; i<=n; i++)
    {
        potencia = potencia * a;
        printf("%u ", potencia);
    }

    return 0;
}
