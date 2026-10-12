#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, a, b, potencia;

    printf("Quantidade de repeticoes: \n");
    scanf("%d", &n);

    potencia = 1; //resultado de a elevado a zero
    i = 0;

    while (i <= n)
    {
        printf("Digite o valor de a: \n");
        scanf("%d", &a);
        printf("Digite o valor de b: \n");
        scanf("%d", &b);

        potencia = potencia * a;

        printf("Valor de a^b: %d\n", potencia);
        i++;

    }
    return 0;
}
