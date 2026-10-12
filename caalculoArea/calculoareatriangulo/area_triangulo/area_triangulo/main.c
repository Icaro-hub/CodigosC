#include <stdio.h>
#include <stdlib.h>

int main()
{
    float area, base, altura;

    printf("Ola! Este programa tem a finalidade de calcular area do triangulo =D\n");

    printf("Digite a base do triangulo:  \n");
    scanf("%f", &base);

    printf("Digite a altura do triangulo:  \n");
    scanf("%f", &altura);

    area = base * altura / 2;

    printf("Calculo finalizado!\n");
    printf("O triangulo de base %f e de altura %f possui uma area igual a %f", base, altura, area);

    return 0;
}
