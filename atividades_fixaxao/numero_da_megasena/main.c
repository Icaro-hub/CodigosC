#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n1, n2, n3, n4, n5, n6;

    printf("Ola! Este programa exibe todas as possibilidades de mega-sena e de ser a sequência da sorte\n");

    for(n1 = 1; n1<=60; n1++)
    {
        for(n2 = n1 + 1; n2<=60; n2++)
        {
            if (n2 == n1)
            {
                continue;
            }
            for (n3=n2 + 1; n3<=60; n3++)
            {
                if (n3 == n1 || n3 == n2)
                {
                    continue;
                }
                for (n4=n3 + 1; n4<=60; n4++)
                {
                    if (n4 == n1 || n4 == n2 || n4 == n3)
                    {
                        continue;
                    }
                    for (n5=n4 + 1; n5<=60; n5++)
                    {
                        if (n5 == n1 || n5 == n2 || n5 == n3 || n5 == n4)
                        {
                            continue;
                        }
                        for(n6=n5 + 1; n6<=60; n6++)
                        {
                            if (n6 == n1 || n6 == n2 || n6 == n3 || n6 == n4 || n6 == n5)
                            {
                                continue;
                            }
                            printf("\n%u %u %u %u %u %u", n1, n2, n3, n4, n5, n6);
                        }
                    }
                }
            }
        }
    }

    return 0;
}
