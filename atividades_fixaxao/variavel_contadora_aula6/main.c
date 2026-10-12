#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int x, divisor, contador;

    printf("Tambem exemplo de numero primo, mas utilizando uma variavel diferente!\n");

    printf("Digite um número: ");
    scanf("%u", &x);

    divisor = 2;
    contador = 0;

    while ((divisor <= x-1) && (contador == 0))
    {
        if (x % divisor == 0)
        {
            contador = contador + 1;//podemos utilizar também apenas contador++
        }
        divisor++;
    }

    if (contador == 0)
    {
        printf("\nNumero considerado primo, devido a nenhuma contagem da variavel!");
    } else
    {
        printf("\nA variavel abriu sua contagem, nao sendo numero primo!");
    }

    return 0;
}
