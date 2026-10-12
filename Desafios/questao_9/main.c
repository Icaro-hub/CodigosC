#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int i, n;
    double atual, anterior;

    printf("Ola! Este programa ira verificar a ordem numerica e classifica-las!\n");

    printf("Quantas repeticoes: ");
    scanf("%u", &n);

    anterior = 0;

    for (i=1; i<=n; i++)
    {
        printf("Digite um numero: ");
        scanf("%lf", &atual);

        if (atual > anterior)
        {
           printf("A ordem esta estritamente crescente!");
        } else if (atual < anterior)
        {
           printf("A ordem esta estritamente decrescente!");
        } else if (atual == anterior)
        {
           printf("A ordem esta constante!");
        } else
        {
           printf("A ordem esta desorganizada!");
        }

        anterior = atual;
    }
    return 0;
}
