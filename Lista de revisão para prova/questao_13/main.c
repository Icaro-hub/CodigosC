#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int i, n, somatoria;

    printf("Introducao aos loops de repeticao. Utiliza-se neste caso uma variavel acumuladora.\n");

    printf("Quantas vezes esse loop ira repetir?: ");
    scanf("%u", &n);

    somatoria = 0;

    for (i=1; i<=n; i++)
    {
        somatoria = somatoria + i;
        printf("%u ", somatoria);
    }

    return 0;
}
