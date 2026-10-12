#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int i, numero1, numero2, numero3, numero4, numero5, numero6;

    printf("Ola, este programa ira utilizar varias estruturas de repeticao!");

    for (i = 0; i <= 60; i++)
    {
        printf("Por favor, digite um numero: ");
        scanf("%u", &numero1);

        if (numero1 % 2 != 0)
        {
            printf("NUMERO INVALIDO. Apenas numeros pares.");
            break;
        }
        for (i = 0; i <= 60; i++)
        {
            printf("Digite o segundo numero: ");
            scanf("&u", &numero2);

            if (numero2 % 2 == 0)
            {
                printf("NUMERO INVALIDO. Apenas numeros impares.");
                break;
            }
            for (i = 0; i <= 60; i++)
            {
                printf("Digite o terceiro numero: ");
                scanf("%u", &numero3);

                if (numero3 % 2 != 0)
                {
                    printf("NUMERO INVALIDO. Apenas numeros pares.");
                    break;

                }
                for (i = 0; i<=60; i++)
                {
                    printf("Digite um numero: ");
                    scanf("%u", &numero4);

                    if (numero4 % 2 == 0)
                    {
                        printf("NUMERO INVALIDO. Apenas numeros impares");
                        break;
                    }
                    for (i=0; i<=60; i++)
                    {
                        printf("Digite um numero: ");
                        scanf("%u", &numero5);

                        if (numero5 % 2 != 0)
                        {
                            printf("NUMERO INVALIDO. Apenas numeros pares.");
                            break;
                        }
                        for (i=0; i<=60; i++)
                        {
                            printf("Digite um numero: ");
                            scanf("%u", &numero6);

                            if (numero6 % 2 == 0)
                            {
                                printf("NUMERO INVALIDO. Apenas numeros impares");
                                break;
                            }
                        }
                    }
                }
            }
        }
    }

    printf("Loop finalizado!");

    return 0;
}
