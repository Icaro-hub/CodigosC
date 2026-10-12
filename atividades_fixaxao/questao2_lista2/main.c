#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int a, b, n;

    printf("Ola! Este programa ira executar potenciacao, considerando A como base e B como a potencia\n");

    printf("Ate quando ira fazer a porcentagem?: ");
    scanf("%u", &n);

    printf("Qual a base para a: ");
    scanf("%u", &a);

    for (b = 1; b <= n; b++)
    {
        a = a * b;

        printf("Valor: %u", a);
    }

    return 0;
}
