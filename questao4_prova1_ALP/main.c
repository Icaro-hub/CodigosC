#include <stdio.h>
#include <stdlib.h>
//Nome: Ícaro Gomes Benedetti
//RA: 2760482621031

int main()
{
    int n, numero_da_sorte, variavel_auxiliar;

    printf("Coloque um numero: ");
    scanf("%d", &n);

    numero_da_sorte = 0;

    while (n >= 10)
    {
        variavel_auxiliar = n;

        while (variavel_auxiliar > 0)
        {
            numero_da_sorte = numero_da_sorte + (variavel_auxiliar % 10);

            variavel_auxiliar = variavel_auxiliar / 10;
        }

        n = numero_da_sorte;

    }

    printf("Resultado do numero da sorte: %d\n\n", n);

    return 0;
}
