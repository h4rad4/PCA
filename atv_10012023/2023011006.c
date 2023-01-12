/*
Faça uma função que transforme um numero decimal em binaryário. (procura em internet como é feita essa transformação)
*/

#include <stdio.h>

int bin(int num)
{
    int binary = 0, resto = 0, c = 0, menor = 0;

    printf("[%d] = ", num);

    while (num >= 2)
    {
        resto = num % 2;
        num = num / 2;
        printf("%d", resto);
        if (num <= 2 && num > 0)
        {
            c++;
            menor = num;
            if (c > 1 && num < menor)
            {
                menor = num;
            }
        }
    }
    printf("%d;\n", menor);
}

int main(int argc, char const *argv[])
{
    int num;

    printf("Input a number: ");
    scanf("%d", &num);

    bin(num);

    return 0;
}