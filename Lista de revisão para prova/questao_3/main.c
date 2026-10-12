#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double resultado_final, raiz_quadrada, potencia;
    unsigned int x;

    printf("Ola! Este programa ira calcular uma expressao a partir do valor inserido de x e que contem uma raiz quadrada!\n");

    printf("Insira valor de x: ");
    scanf("%u", &x);

    raiz_quadrada = x + 5;
    raiz_quadrada = sqrt(raiz_quadrada);

    potencia = pow(x, 2);

    resultado_final = raiz_quadrada + (x / 2) + potencia;

    printf("Resultado final da expressao: %lf", resultado_final);

    return 0;
}
