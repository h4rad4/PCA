/*
Na matemática, a sequência de Fibonacci é uma sequência de números inteiros, começando normalmente por 0 e 1, na qual, cada termo subsequente (número de Fibonacci) 
corresponde a soma dos dois anteriores.

A sequência recebeu o nome do matemático italiano Leonardo de Pisa, mais conhecido por Fibonacci, que descreveu, no ano de 1202, o crescimento de uma população de coelhos, 
a partir desta.

Tal sequência já era, no entanto, conhecida na antiguidade.
Os números de Fibonacci são, portanto, os números que compõem a seguinte sequência:
1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377...

Assim, o número de Fibonacci Fn para n>0 é definido da seguinte maneira:

F1 = 1
F2 = 1
Fn = Fn-1 + Fn-2 para n>2.

Escreva uma função que retorne o número relativo a ao valor na sequência de Fibonacci na posição n:
int fib(int n)  //Recebe n como parâmetro e retorna Fn
*/

#include <stdio.h>

int fn, number;
int f1 = 0, f2 = 1;

int Fibo() {
    
    for (int i = 2; i <= number+1; i++) {
        fn = f1 + f2;
        f1 = f2;
        f2 = fn;
    }

    printf("Fn = [%i]", f1);

    return fn;
}


int main(int argc, char const *argv[])
{
    printf("Input the position 'n': ");
    scanf("%i", &number);

    Fibo();
    
    return 0;
}
