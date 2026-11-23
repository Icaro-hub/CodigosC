#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char p1[50], p2[50];
    int i, k, contagem1, contagem2, m1, m2;

    printf("Digite uma palavra: ");
    fgets(p1, 50, stdin);

    printf("Digite outra palavra: ");
    fgets(p2, 50, stdin);

    contagem1 = strlen(p1);
    contagem1 = contagem1 - 1;
    contagem2 = strlen(p2);
    contagem2 =  contagem2 - 1;

    m1 = 0;
    m2 = 0;

    if (contagem1 < contagem2)
    {
        m2 = 1;
    } else
    {
        m1 = 1;
    }

    i = 0;
    k = 0;

    while (m1 == 1 && i < contagem1)
    {
        k = 0;

        while (k < contagem2 && p1[i+k] == p2[k])
        {
            k++;
        }

        i++;

        if (k == contagem2)
        {
            printf("%s fica dentro de %s", p2, p1);
        }
    }

    while (m2 == 1 && i < contagem2)
    {
        k = 0;

        while (k < contagem1 && p2[i+k] == p1[k])
        {
            k++;
        }

        i++;

        if (k == contagem1)
        {
            printf("%s fica dentro de %s", p1, p2);
        }
    }

    return 0;
}
