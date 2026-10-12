#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b, s, d, m, div;

    printf("Digite o primeiro numero double: \n");
    scanf("%lf", &a);

    printf("Digite o segundo numero double:  \n");
    scanf("%lf", &b);

    s = a + b;
    printf("Resultado da soma: %lf \n", s);

    d = a - b;
    printf("Resultado da subtracao: %lf \n", d);

    m = a * b;
    printf("Resultado da multiplicacao: %lf \n", m);

    div = a / b;
    printf("Resultado da divisao: %lf \n", div);

    return 0;
}
