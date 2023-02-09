/*
------------------------------------------------------------------------------------------------------------------------------------------------------------------
Faça um programa que multiplica uma matriz 3 x 3 de inteiros por um escalar k e imprima o resultado na tela. O usuário deve fornecer os valores da matriz e de k.
------------------------------------------------------------------------------------------------------------------------------------------------------------------
*/
#include <stdio.h>

int m[3][3] = {{0,0,0}, 
               {0,0,0}, 
               {0,0,0}};

int result[3][3] = {{0,0,0},
                    {0,0,0},
                    {0,0,0}};

int k;

int main(int argc, char const *argv[])
{
    printf("Input the scalar value. ");
    scanf("%i", &k);

    input();
    operator();

    printf("Result: ");
    printer();

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
        //printf("[%i] ", m[i][j]);
    }
}

void operator()
{
    int sum = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result[i][j] += m[i][j] * k;
        }
    }
}

void printer()
{
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("[%i]", result[i][j]);
        }
    }
}