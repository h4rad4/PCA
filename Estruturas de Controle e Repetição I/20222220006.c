// Faça um programa para imprimir a tabuada de 1 a 9 utilizando laços de repetição.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;

    printf("Digite o numero do qual deseja ver a tabuada: ");
    scanf("%i", &num);

    for (int i = 1; i <= 10; i++) {
        printf("%i x %i =  %i\n", num, i, num*i);
    }

    return 0;
}