/*
--------------------------------------------------------------------------------------------------------------------------------------------------------------
Faça uma função que retorne se um número inteiro positivo x e segmento de outro número inteiro positivo y, onde x < y (pode usar a função desenvolvida em 3)
Ex. x= 678, y= 567890 R/ é um segmento; x= 1243, y= 2212435 R/ é um segmento;
--------------------------------------------------------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <math.h>

int decimal(int number)
{
    int c = 0, resto = 0, multi = 0, sum = 0;

    printf("[%d] = ", number);

    while (number > 0)
    {
        resto = number % 10;
        number = number / 10;
        multi = resto * (pow(2, c));
        sum += multi;
        c++;
    }

    printf("%d;\n", sum);
}

int main(int argc, char const *argv[])
{
    int number;

    printf("Input a binary number: ");
    scanf("%d", &number);
    decimal(number);

    return 0;
}