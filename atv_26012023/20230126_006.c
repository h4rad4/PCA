/*
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Dizemos que uma matriz quadrada inteira é um quadrado mágico (1) se a soma dos elementos de cada linha, a soma dos elementos de cada coluna e a soma dos elementos das
diagonais principal e secundária são todas iguais.

Dada uma matriz quadrada A5x5 , verificar se A é um quadrado mágico.
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
*/
#include <stdio.h>

int m[5][5];

int sLinha = 0, sColuna = 0, sD1 = 0, sD2 = 0;

int l, c;

int main(int argc, char const *argv[])
{
    createMatrix();

    printf("\n Matrix: \n");
    printer();

    sumLinha();
        printf("Sum L = %i \n", sLinha);
    sumColuna();
        printf("Sum C = %i \n", sColuna);
    sumD1();
        printf("Sum D1 = %i \n", sD1);
    sumD2();
        printf("Sum D2 = %i \n", sD2);

    if (sLinha == sColuna && sD1 == sD2 && sLinha == sD1)
        printf("\nMagic Square!");
    else
        printf("\n Not a magic square");

    return 0;
}

void createMatrix()
{
    printf("Type the matrix' dimension (i). ");
    scanf("%i", &l);

    printf("Type the matrix' dimension (j). ");
    scanf("%i", &c);

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Input the elements. i[%i] j[%i]", i, j);
            scanf("%i", &m[i][j]);
        }
    }
}

void printer()
{
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("[%i]", m[i][j]);
        }
    }
    printf("\n----------------------------- \n");
}

void sumLinha()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            sLinha += m[i][j];
        }
    }
}

void sumColuna()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            sColuna += m[i][j];
        }
    }
}

void sumD1()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (m[i] == m[j])
            {
                sD1 += m[i][j];
            }
        }
    }
}

void sumD2()
{
    for (int i = 0; i < 5; i++)
    {
        sD2 += m[5 - 1 - i][5 - 1 - i];
    }
}
