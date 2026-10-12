#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n1, n2, n3, n4, n5, n6;

    for (n1 = 2; n1 <= 60; n1++)
    {
        if (n1 % 2 != 0)
        {
            printf("Numero invalido! Apenas par no primeiro numero");
            break;
        }
        for (n2 = n1 + 1; n2 <= 60; n2++)
        {
            if (n2 % 2 == 0)
            {
                printf("Numero invalido! Apenas impar no segundo numero");
                break;
            }
            for (n3 = n2 + 1; n3 <= 60; n3++)
            {
                if (n3 % 2 != 0)
                {
                    printf("Numero invalido! Apenas par no terceiro numero");
                    break;
                }
                for (n4 = n3 + 1; n4 <= 60; n4++)
                {
                    if (n4 % 2 == 0)
                    {
                        printf("Numero invalido! Apenas impar no quarto numero");
                        break;
                    }
                    for (n5 = n4 + 1; n5<= 60; n5++)
                    {
                        if (n5 % 2 != 0)
                        {
                            printf("Numero invalido! Apenas par no quinto numero");
                            break;
                        }
                        for (n6 = n5 + 1; n6 <= 60; n6++)
                        {
                            if (n6 % 2 != 0)
                            {
                                printf("%u, %u, %u, %u, %u, %u", n1, n2, n3, n4, n5, n6);
                            } else
                            {
                                printf("Numero invalido! Apenas impar no sexto numero");
                                break;
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}
