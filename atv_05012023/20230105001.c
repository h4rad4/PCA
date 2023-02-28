/*
-------------------------------------------------------------------------------------------------------------------------------
Faça um programa que leia dois valores inteiros x e y entre 0 e 1000. Encontre o maior entre eles e imprima:
- O percentual do menor em relação ao maior
- O módulo da diferença entre o maior e o menor

O programa deve utilizar três funções:
a) scanIntIntervalo: Função para ler inteiros do teclado garantido que eles estejam dentro de um intervalo pré-determinado;
b) percentual: Função para calcular o percentual:  100*valor/total
c) absdif: Função que retorna o valor absoluto da diferença entre dois números reais.
-------------------------------------------------------------------------------------------------------------------------------
*/
#include <stdio.h>

int x, y;

// a) scanIntIntervalo: Função para ler inteiros do teclado garantido que eles estejam dentro de um intervalo pré-determinado;
void scanIntIntervalo()
{
    printf("Input the value of X:  ");
    scanf("%i", &x);

    printf("Input the value of Y: ");
    scanf("%i", &y);

    while (x >= 1000 || x <= 0)
    {
        printf("X is not between 0 and 1000. \n\n");

        printf("Input another value for X: ");
        scanf("%i", &x);
    }

    while (y >= 1000 || y <= 0)
    {
        printf("Y is not between 0 and 1000. \n\n");

        printf("Input another value for Y: ");
        scanf("%i", &y);
    }
}

// b) percentual: Função para calcular o percentual:  100*valor/total
float percentual(){
    int maior, menor;
    float result;

    if (x > y) {
        maior = x;
        menor = y;
    } else
    {
        maior = y;
        menor = x;
    }

    if (x > y) {
        result = 100 - ((100*y)/x);
        printf("- [%i] is approximately [%.2f] bigger than [%i]", x, result, y);
    } else {
        result = 100 - ((100*x)/y);
        printf("- [%i] is approximately [%.2f] bigger than [%i]", y, result, x);
    }
}

// c) absdif: Função que retorna o valor absoluto da diferença entre dois números reais.
int absdif() {
    int diff = x - y;
    int modulus = abs(diff);

    printf("\n- The modulus of [%i] - [%i] is equal to [%i]", x, y, modulus);

}

int main(int argc, char const *argv[])
{
    scanIntIntervalo();
    percentual();
    absdif();

    return 0;
}