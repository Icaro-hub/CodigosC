#include <stdio.h>
#include <stdlib.h>


int main()
{
    int opcao;

    const char prato1[] = "Strogonoff";
    const char prato2[] = "Bife milanesa";
    const char prato3[] = "Calabresa acebolada";
    const char prato4[] = "Sushi";
    const char prato5[] = "Sair do programa?";

    printf("Prato 1: %s\n", prato1);
    printf("Prato 2: %s\n", prato2);
    printf("Prato 3: %s\n", prato3);
    printf("Prato 4: %s\n", prato4);
    printf("Prato 5: %s\n\n", prato5);

    while(opcao <=5)
    {
        printf("Escolha a opcao: ");
        scanf("%d", &opcao);

        if(opcao == 1)
        {
            printf("Prato %d - %s\n", opcao, prato1);
        } else if(opcao == 2)
        {
            printf("Prato %d - %s\n", opcao, prato2);
        } else if(opcao == 3)
        {
            printf("Prato %d - %s\n", opcao, prato3);
        } else if(opcao == 4)
        {
            printf("Prato %d - %s\n", opcao, prato4);
        } else
        {
            printf("O cliente saiu do programa!");
            break;

        }
    }

    return 0;
}
