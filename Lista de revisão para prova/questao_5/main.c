#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int numero;

    printf("Ola! Este programa ira ver se um numero pode ser par ou impar e analisa se e positivo, negativo ou nulo!\n");

    printf("Por favor, digite um numero: ");
    scanf("%ld", &numero);

    if (numero > 0 && numero % 2 == 0)
    {
        printf("Numero par e maior que zero");
    } else if (numero < 0 && numero % 2 == 0)
    {
        printf("Numero par e menor que zero");
    } else if (numero > 0 && numero % 2 != 0)
    {
        printf("Numero impar e maior que zero");
    } else if (numero < 0 && numero % 2 != 0)
    {
        printf("Numero impar e menor que zero");
    } else
    {
        printf("Numero nulo");
    }

    return 0;
}
