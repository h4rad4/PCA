/*
----------------------------------------------------------------------------------------------------------------------------------------------------
Leia uma matriz 3 x 3. Leia também um valor X.
O programa deverá fazer uma busca desse valor na matriz e, ao final escrever a localização (linha e coluna) ou uma mensagem de “não encontrado”.
----------------------------------------------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>

int m[3][3] = {{0, 0, 0},
               {0, 0, 0},
               {0, 0, 0}};

int x;

int main(int argc, char const *argv[])
{
    printf("Input the number to be searched. ");
    scanf("%i", &x);

    input();
    printf("X have been found in the positions: ");
    finder();

    return 0;
}

void input()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Input the components. ");
            scanf("%i", &m[i][j]);
        }
    }
}

void finder()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (m[i][j] == x)
            {
                printf("[%i][%i]\n", i, j);
            }
            if (m[i][j] != x)
            {
                printf("not found. ");
                break;
            }
        }
    }
}