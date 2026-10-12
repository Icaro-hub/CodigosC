#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    printf("Digite o primeiro numero: \n");
    scanf("%d", &a);

    printf("Digite o segundo numero: \n");
    scanf("%d", &b);

    printf("Digite o terceiro numero: \n");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("Maior resultado: %d\n", a);
    } else if (b > a && b > c)
    {
        printf("Maior resultado: %d\n", b);
    } else
    {
        printf("Maior resultado: %d", c);
    }

    return 0;
}
