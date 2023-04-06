/*
--------------------------------------------------------------
Dada uma matriz 5x5, elabore um algoritmo que imprima:

- A diagonal principal
- A diagonal secundária
- A soma da linha 4
- A soma da coluna 2
- Tudo, exceto a diagonal principal
--------------------------------------------------------------
*/
#include <stdio.h>

int m[5][5] = {{1, 1, 1, 1, 1},
               {2, 2, 2, 2, 2},
               {3, 3, 3, 3, 3},
               {4, 4, 4, 4, 4},
               {5, 5, 5, 5, 5}};

int sum_l4 = 0, sum_c2 = 0, sum_all = 0;

int main(int argc, char const *argv[])
{

    printf("D1 = ");
    d1();
    printf("\n");

    printf("D2 = ");
    d2();
    printf("\n");

    printf("Sum of L4's elements = ");
    sum_L4();
    printf("\n");

    printf("Sum of C2's elements = ");
    sum_C2();
    printf("\n");

    printf("Sum of everything, except the main diagonal = ");
    sum_ALL();

    return 0;
}

void d1()
{
    for (int i = 0; i < 5; i++)
    {
        printf("[%i]", m[i][i]);
    }
}

void d2()
{
    for (int i = 0; i < 5; i++)
    {
        printf("[%i]", m[5 - 1 - i][5 - 1 - i]);
    }
}

void sum_L4()
{
    for (int i = 0; i < 5; i++)
    {
        sum_l4 += m[3][i];
    }
    printf("%i", sum_l4);
}

void sum_C2()
{
    for (int i = 0; i < 5; i++)
    {
        sum_c2 += m[i][1];
    }
    printf("%i", sum_c2);
}

void sum_ALL()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (m[i] != m[j])
            {
                sum_all += m[i][j];
            }
        }
    }
    printf("%i", sum_all);
}