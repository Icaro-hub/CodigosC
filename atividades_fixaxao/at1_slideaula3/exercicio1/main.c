#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Ola! Aqui e um programa que imprime SIM ou NAO por meio de digitacao de um numero, para ver se e impar ou par!\n");
    printf("Digite um numero inteiro: \n");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        if (num > 10 || num < 50)
        {
            printf("SIM");
        }
    } else
    {
        printf("NAO");
    }

    return 0;
}
