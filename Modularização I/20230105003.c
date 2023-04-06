/*
-------------------------------------------------------------------------------------------------------------------------------
Um número perfeito é um número inteiro para o qual a soma de todos os seus divisores positivos próprios (excluindo-o) é igual ao próprio número.
Por exemplo, o número 6 é um número perfeito, pois: 6 = 1 + 2 + 3. O próximo número perfeito é o 28, pois: 28 = 1 + 2 + 4 + 7 + 14.

Escreva um programa em C com as seguintes funções:

- Função para ler um número inteiro e verifique se ele é par, caso seja impar obrigue o usuário a digitar outro número até que um número par seja digitado;
- Função para verificar se o número digitado é perfeito e imprima uma mensagem na tela indicando se o número digitado é perfeito ou não.
-------------------------------------------------------------------------------------------------------------------------------
*/
#include <stdio.h>

int number, perfect, sum = 0;

void IfEven()
{ // Função para ler um número inteiro e verifique se ele é par, caso seja impar obrigue o usuário a digitar outro número até que um número par seja digitado;

    printf("Input an even number: ");
    scanf("%i", &number);

    while (number % 2 != 0)
    {
        printf("This is not an even number! \n\n");

        printf("Input an even number: ");
        scanf("%i", &number);
    }
}

int IfPerfect()
{ // Função para verificar se o número digitado é perfeito e imprima uma mensagem na tela indicando se o número digitado é perfeito ou não.

    for (int i = 1; i < number; i++)
    {

        if (number % i == 0)
        {
            sum += i;
        }
    }

    if (number == sum) {
        printf("This is a perfect number!");
    } else
    {
        printf("This is not a perfect number.");
    }
    
}

int main(int argc, char const *argv[])
{
    IfEven();
    IfPerfect();
    return 0;
}
