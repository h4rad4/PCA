/*
------------------------------------------------------------------------------------------------------------------------------------------------------------
Faça uma função que dados um inteiro n e um inteiro d, 0 < d < 9, devolve quantas vezes o dígito d aparece em n. (dica: utilizar o operador % na solução)
------------------------------------------------------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>

int main()
{

    int n, choose, n1, resto;
    int c = 0;
    printf("Input a number: ");
    scanf("%d", &n);
    printf("Input a number between 0 and 9: ");
    scanf("%d", &choose);

    while (choose >= 9 || choose <= 0)
    {
        printf("Input a valid number\n");
        printf("Input a number between 0 and 9: ");
        scanf("%d", &choose);
    }

    n1 = n;

    while (n > 0)
    {
        resto = n % 10;
        n = n / 10;
        if (resto == choose)
        {
            c++;
        }
    }

    printf("The number [%d] appears [%d] in [%d];", choose, c, n1);

    return 0;
}