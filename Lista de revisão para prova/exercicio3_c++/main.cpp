#include <iostream>

using namespace std;

int main()
{
    int numero1, numero2, numero3, menor;

    cout << "Digite o primeiro numero: ";
    cin >> numero1;

    cout << "Digite o segundo numero: ";
    cin >> numero2;

    cout << "Digite o terceiro numero: ";
    cin >> numero3;

    cout << "Primeiro numero: " << numero1 << endl;
    cout << "Segundo numero: " << numero2 << endl;
    cout << "Terceiro numero: " << numero3 << endl;

    menor = 0;

    if (numero1 < numero2 && numero1 < numero3)
    {
        menor = numero1;
        cout << "O menor numero dentre os tres e o " << numero1 << endl;
    } else if (numero2 < numero1 && numero2 < numero3)
    {
        menor = numero2;
        cout << "O menor numero dentre os tres e o " << numero2 << endl;
    } else
    {
        menor = numero3;
        cout << "O menor numero dentre os tres e o " << numero3 << endl;
    }

    return 0;
}
