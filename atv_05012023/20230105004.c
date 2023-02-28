/*
---------------------------------------------------------------------------------------------------------------------------------------------
Na matemática, o fatorial de um número natural n, representado por n!, é o produto de todos os inteiros positivos menores ou iguais a n.

Construa uma função que receba como parâmetro n e retorne o fatorial de n:

int fat(int n)

(!) Recebe n como parâmetro e retorna n!
---------------------------------------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>

int number, sum = 1;

int Factorial(n) {

    for (int i = 1; i <= n; i++) {
        sum += sum*(i-1);
    }
    
    return sum;
}

int main(int argc, char const *argv[])
{
    printf("Input a number: ");
    scanf("%i", &number);

    Factorial(number);
    printf("The factorial of [%i] is equal to [%i]", number, sum);

    return 0;
}
