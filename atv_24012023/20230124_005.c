/*
----------------------------------------------------------------------------------------------------------------------------------------------------------------
Criar e utilizar num programa uma função que receba uma sequência de n números e mude a sequência para o fatorial de cada uns dos números da sequência
(o comprimento máximo da sequência é 100 pelo que n tem que ser um número menor que 100). Exemplo: sequência inicial {2,5,7}  sequência final {2, 120, 5040}
----------------------------------------------------------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>

int n, qt, factorial = 1;
int array[100] = {};

void fact()
{
    for (int i = 1; i <= qt; i++)
    {
        printf("Typa number. ");
        scanf("%i", &array[i]);

        for (factorial = 1; array[i] > 1; array[i]--)
        {
            factorial *= array[i];
            // printf("%i\n", factorial);
        }

        array[i] = factorial;
    }

    printf("Factorial = ");

    for (int i = 1; i <= qt; i++)
        {
            printf("[%i]", array[i]);
        }
}

int main(int argc, char const *argv[])
{
    printf("Interval = ");
    scanf("%i", &qt);

    fact();

    return 0;
}