/*
-----------------------------------------------------------------------------------------
Tentando descobrir se um dado era viciado, um dono de cassino o lançou n vezes.
Dados os n resultados dos lançamentos, determinar o número de ocorrências de cada face.
-----------------------------------------------------------------------------------------
*/

#include <stdio.h>

int array[100], result[100];
int n, qt;

void input()
{
    for (int i = 1; i <= qt; i++)
    {
        printf("Input the value. ");
        scanf("%i", &array[i]);
    }

    for (int k = 1; k <= qt; k++)
    {
        n = array[k];
        result[n]++;
    }
}

void magic()
{
    for (int j = 1; j <= qt; j++)
    {
        while (result[j] != 0)
        {
        printf("[%i]", result[j]);
        break;
        }
    }
}

int main(int argc, char const *argv[])
{

    printf("How many times you have thrown the dice? ");
    scanf("%i", &qt);

    input();
    magic();

    return 0;
}