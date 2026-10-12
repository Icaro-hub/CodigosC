#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a, b, c, s, A, antes_raiz;
    char tipo_triangulo;

    printf("Ola! Este programa tem a funcao de realizar calculos dentro de um triangulo, informando qual o tipo dele.\n");

    printf("Digite o tipo do triangulo, apenas as suas iniciais (I, Es e E): ");
    scanf("%c", &tipo_triangulo);

    printf("Digite o valor a: ");
    scanf("%lf", &a);
    printf("Digite o valor b: ");
    scanf("%lf", &b);
    printf("Digite o valor c: ");
    scanf("%lf", &c);

    s = (a + b + c) / 2;

    printf("O valor de s e igual a: %lf\n", s);

    antes_raiz = s * (s - a) * (s - b) * (s - c);
    A = sqrt(antes_raiz);

    printf("Area do triangulo %c = %lf", tipo_triangulo, A);

    return 0;
}
