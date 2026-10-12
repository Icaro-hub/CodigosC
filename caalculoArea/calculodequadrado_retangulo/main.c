#include <stdio.h>
#include <stdlib.h>

int main()
{
    double area, base, altura;

    printf("Ola! Este codigo calcula area de um retangulo \n");

    printf("Digite a base: \n");
    scanf("%lf", &base);

    printf("Digite a altura: \n");
    scanf("%lf", &altura);

    area = base * altura;

    printf("Este retangulo de base %lf e de altura %lf tem uma area de %lf", base, altura, area);

    return 0;
}
