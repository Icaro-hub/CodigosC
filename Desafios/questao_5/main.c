#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int acumuladora, n;
    int i;

    printf("Ate que numero: ");
    scanf("%u", &n);

    acumuladora = 0;

    for (i=0; i<=n; i=i+2)
    {
        acumuladora = acumuladora + i;

        printf("%u ", acumuladora);
    }

    return 0;
}
