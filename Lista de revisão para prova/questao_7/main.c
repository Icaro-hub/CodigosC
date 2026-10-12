#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b, c;

    printf("Ola! Este programa ira ordenar os numeros de acordo com os digitos que o usuario tera!\n");

    printf("Digite o primeiro numero: ");
    scanf("%lf", &a);

    printf("Digite o segundo numero: ");
    scanf("%lf", &b);

    printf("Digite o terceiro numero: ");
    scanf("%lf", &c);

    if (a > b && b > c && a > c)
    {
        printf("Maior numero: %.2lf\n", a);
        printf("Menor numero: %.2lf\n", c);
    } else if (a > c && c > b && a > b)
    {
        printf("Maior numero: %.2lf\n", a);
        printf("Menor numero: %.2lf\n", b);
    } else if (b > c && c > a && b > a)
    {
        printf("Maior numero: %.2lf\n", b);
        printf("Menor numero: %.2lf\n", a);
    } else if (b > a && a > c && b > c)
    {
        printf("Maior numero: %.2lf\n", b);
        printf("Menor numero: %.2lf\n", c);
    } else if (c > a && a > b && c > b)
    {
        printf("Maior numero: %.2lf\n", c);
        printf("Menor numero: %.2lf\n", b);
    } else
    {
        printf("Maior numero: %.2lf\n", c);
        printf("Menor numero: %.2lf\n", a);
    }

    return 0;
}
