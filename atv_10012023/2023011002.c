/*
Usando a função programada em 1 crie outra função que recebe dos números inteiros positivos e verifica se o primeiro é uma permutação de b
(para a ser uma permutação tem que ter de cada número entre 0 e 9 a mesma quantidade)
*/

#include <stdio.h>

int cont(int n1, int n2, int n3)
{

    int c = 0;
    int resto;

    while (n2 >= 9 || n2 <= 0)
    {
        printf("Input a valid number\n");
        printf("Input a number between 0 and 9: ");
        scanf("%d", &n2);
    }

    n3 = n1;

    while (n1 > 0)
    {
        resto = n1 % 10;
        n1 = n1 / 10;
        if (resto == n2)
        {
            c++;
        }
    }

    return c;
}

int permut(int n1, int n4, int n2, int c)
{
    int n5, resto;
    int i = 0;
    n5 = n4;

    while (n4 > 0)
    {
        resto = n4 % 10;
        n4 = n4 / 10;
        if (resto == n2)
        {
            i++;
        }
    }

    if (i == c)
    {
        printf("The number [%d] is a permutation of [%d]", n5, n1);
    }
    else
    {
        printf("The number [%d] is not a permutation of [%d];", n5, n1);
    }
    return i;
}

int main()
{
    int n1, n2, n3, n4, c;

    printf("Input a number: ");
    scanf("%d", &n1);
    printf("Input a number between 0 and 9: ");
    scanf("%d", &n2);

    c = cont(n1, n2, n3);

    printf("Input a new number: ");
    scanf("%d", &n4);

    permut(n1, n4, n2, c);

    return 0;
}