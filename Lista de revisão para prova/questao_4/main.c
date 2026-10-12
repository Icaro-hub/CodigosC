#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Ola! Programa simples que troca os valores de a e b sem depender de uma terceira variavel!\n");

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Valor de a: %d\n", a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Valor de b: %d\n", b);

    a = a + b;
    b = a - b;
    a = a + b;

    printf("Agora a: %d e b: %d", a, b);

    return 0;
}
