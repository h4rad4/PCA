/*
--------------------------------------------------------------------------------------------------------------
Os elementos aij de uma matriz inteira Anxn representam os custos de transporte da cidade i para a cidade j. 
Dados n itinerários, cada um com k cidades, calcular o custo total para cada itinerário.

Exemplo:
4    1    2    3
5    2    1    400
2    1    3    8
7    1    2    5

O custo do itinerário 0 3 1 3 3 2 1 0 é

a03 + a31 + a13 + a33 + a32 + a21 + a10 = 3 + 1 + 400 + 5 + 2 + 1 + 5 = 417
--------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>

int m[4][4] = {{1, 1, 1, 1},
               {2, 2, 2, 2},
               {3, 3, 3, 3},
               {4, 4, 4, 4}};

int trjt[100];

int main(int argc, char const *argv[])
{

    for (int i = 0; i < 4; i++)
    {
        printf("Input destination [%i]. ", i);
        scanf("%i", &trjt[i]);

        while (trjt[0] < 0 || trjt[0] > 3)
        {
            printf("Invalid. \n");
            printf("Input destination [%i]. ");
            scanf("%i", &trjt[i]);
        }
    }
    printf("Chosen trajectory = [\t");

    for (int a = 0; a < 4; a++)
    {
        printf("%i\t", trjt[a]);
    }
    printf("]");

    listin(trjt);
    return 0;
}

void listin(int trjt[100])
{
    int cost = 0;

    for (int b = 0; b < 3; b++)
    {
        cost += m[trjt[b]][trjt[b + 1]];
    }
    printf("\nTotal Cost= %d\n", cost);
}