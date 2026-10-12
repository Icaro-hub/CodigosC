#include <stdio.h>
#include <stdlib.h>

int main()
{
    double numero1, numero2, numero3;

    printf("Ola! Este programa ira fazer ordem dos numeros.\n");

    printf("Coloque o primeiro numero: ");
    scanf("%lf", &numero1);

    printf("Coloque o segundo numero: ");
    scanf("%lf", &numero2);

    printf("Coloque o terceiro numero: ");
    scanf("%lf", &numero3);

    if (numero1 > numero2 && numero2 > numero3 && numero1 > numero3)
    {
        printf("Ordem: %lf, %lf, %lf", numero1, numero2, numero3);
    } else if (numero1 > numero3 && numero3 > numero2 && numero1 > numero2)
    {
        printf("Ordem: %lf, %lf, %lf", numero1, numero3, numero2);
    } else if (numero2 > numero1 && numero1 > numero3 && numero2 > numero3)
    {
        printf("Ordem: %lf, %lf, %lf", numero2, numero1, numero3);
    } else if (numero2 > numero3 && numero3 > numero1 && numero2 > numero1)
    {
        printf("Ordem: %lf, %lf, %lf", numero2, numero3, numero1);
    } else if (numero3 > numero1 && numero1 > numero2 && numero3 > numero2)
    {
        printf("Ordem: %lf, %lf, %lf", numero3, numero1, numero2);
    } else if(numero3 > numero2 && numero2 > numero1 && numero3 > numero1)
    {
        printf("Ordem: %lf, %lf, %lf", numero3, numero2, numero1);
    } else
    {
        printf("Numeros em desordem.");
    }

    return 0;
}
