#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1, numero2, numero3, numero_maior, numero_menor, igualdade_total, igualdade_parcial, diferenca;

    printf("Tres numeros e definir operacoes por meio delas\n");

        printf("Digite o primeiro numero: ");
        scanf("%d", &numero1);

        printf("Digite o segundo numero: ");
        scanf("%d", &numero2);

        printf("Digite o terceiro numero: ");
        scanf("%d", &numero3);

        if (numero1 > numero2 && numero1 > numero3)
        {
            numero_maior = numero1;
            printf("Maior numero: %d\n", numero_maior);

            if (numero2 > numero3)
            {
                numero_menor = numero3;
                printf("Menor numero: %d\n", numero_menor);
            } else
            {
                numero_menor = numero2;
                printf("Menor numero: %d\n", numero_menor);
            }

        } else if (numero2 > numero1 && numero2 > numero3)
        {
            numero_maior = numero2;
            printf("Maior numero: %d\n", numero_maior);

            if (numero1 > numero3)
            {
                numero_menor = numero3;
                printf("Menor numero: %d\n", numero_menor);
            } else
            {
                numero_menor = numero1;
                printf("Menor numero: %d\n", numero_menor);
            }

        } else if (numero3 > numero1 && numero3 > numero2)
        {
            numero_maior = numero3;
            printf("Maior numero: %d\n", numero_maior);

            if (numero1 > numero2)
            {
                numero_menor = numero2;
                printf("Menor numero: %d\n", numero_menor);
            } else
            {
                numero_menor = numero1;
                printf("Menor numero: %d\n", numero_menor);
            }

        } else if (numero1 == numero2 && numero1 == numero3)
        {
            printf("Todos os numeros sao iguais");
        } else if (numero1 == numero2 || numero1 == numero3)
        {
            printf("Um dos numeros sao iguais.");
        } else
        {
            printf("Todos os numeros sao diferentes");
        }

    return 0;
}
