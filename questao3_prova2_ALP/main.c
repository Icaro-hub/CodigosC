#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Nome: Ícaro Gomes Benedetti
//Registro Acadêmico: 2760482621031

int main()
{
    int k, i, tamanho_string, somatorio, numero;
	char string[50];

	printf("Palavra antes da criptografia: ");
	fgets(string, 50, stdin);

	printf("Qual o seu valor de entrada para criptografar? -> ");
	scanf("%d", &k);

	tamanho_string = strlen(string) - 1;

	for (i = 0; i < tamanho_string && string[i] != '\0'; i++)
	{
		somatorio = 0;

		if (string[i] == 'a')
		{
			numero = 0;
		} else if (string[i] == 'b')
		{
			numero = 1;
		} else if (string[i] == 'c')
		{
			numero = 2;
		} else if (string[i] == 'd')
		{
			numero = 3;
		} else if (string[i] == 'e')
		{
			numero = 4;
		} else if (string[i] == 'f')
		{
			numero = 5;
		} else if (string[i] == 'g')
		{
			numero = 6;
		} else if (string[i] == 'h')
		{
			numero = 7;
		} else if (string[i] == 'i')
		{
			numero = 8;
		} else if (string[i] == 'j')
		{
			numero = 9;
		} else if (string[i] == 'k')
		{
			numero = 10;
		} else if (string[i] == 'l')
		{
			numero = 11;
		} else if (string[i] == 'm')
		{
			numero = 12;
		} else if (string[i] == 'n')
		{
			numero = 13;
		} else if (string[i] == 'o')
		{
			numero = 14;
		} else if (string[i] == 'p')
		{
			numero = 15;
		} else if (string[i] == 'q')
		{
			numero = 16;
		} else if (string[i] == 'r')
		{
			numero = 17;
		} else if (string[i] == 's')
		{
			numero = 18;
		} else if (string[i] == 't')
		{
			numero = 19;
		} else if (string[i] == 'u')
		{
			numero = 20;
		} else if (string[i] == 'v')
		{
			numero = 21;
		} else if (string[i] == 'w')
		{
			numero = 22;
		} else if (string[i] == 'x')
		{
			numero = 23;
		} else if (string[i] == 'y')
		{
			numero = 24;
		} else if (string[i] == 'z')
		{
			numero = 25;
		} else
		{
		    if (string[i] == ' ')
            {
                printf(" ");
                continue;
            } else
            {
                printf("\nCaractere nao atendido de acordo com o alfabeto.\n");
            }
		}

		somatorio = k + numero;

		if (somatorio > 25)
		{
			somatorio = somatorio % 26;
		}

		if (somatorio == 0)
		{
			string[i] = 'a';
		} else if (somatorio == 1)
		{
			string[i] = 'b';
		} else if (somatorio == 2)
		{
			string[i] = 'c';
		} else if (somatorio == 3)
		{
			string[i] = 'd';
		} else if (somatorio == 4)
		{
			string[i] = 'e';
		} else if (somatorio == 5)
		{
			string[i] = 'f';
		} else if (somatorio == 6)
		{
			string[i] = 'g';
		} else if (somatorio == 7)
		{
			string[i] = 'h';
		} else if (somatorio == 8)
		{
			string[i] = 'i';
		} else if (somatorio == 9)
		{
			string[i] = 'j';
		} else if (somatorio == 10)
		{
			string[i] = 'k';
		} else if (somatorio == 11)
		{
			string[i] = 'l';
		} else if (somatorio == 12)
		{
			string[i] = 'm';
		} else if (somatorio == 13)
		{
			string[i] = 'n';
		} else if (somatorio == 14)
		{
			string[i] = 'o';
		} else if (somatorio == 15)
		{
			string[i] = 'p';
		} else if (somatorio == 16)
		{
			string[i] = 'q';
		} else if (somatorio == 17)
		{
			string[i] = 'r';
		} else if (somatorio == 18)
		{
			string[i] = 's';
		} else if (somatorio == 19)
		{
			string[i] = 't';
		} else if (somatorio == 20)
		{
			string[i] = 'u';
		} else if (somatorio == 21)
		{
			string[i] = 'v';
		} else if (somatorio == 22)
		{
			string[i] = 'w';
		} else if (somatorio == 23)
		{
			string[i] = 'x';
		} else if (somatorio == 24)
		{
			string[i] = 'y';
		} else if (somatorio == 25)
		{
			string[i] = 'z';
		} else
		{
		    printf("ERROR!\n");
		    break;
		}

		printf("%c", string[i]);
	}

	printf("\n");

    return 0;
}
