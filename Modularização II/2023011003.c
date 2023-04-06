/*
-------------------------------------------------------------------------------------------------------------
Faça uma função que dados dois inteiros positivos x e y verifica se y corresponde aos últimos dígitos de x.

Ex. x= 567890, y=890 R/corresponde; x= 2457, y= 245 R/não corresponde; x= 457, y= 2457 R/não corresponde
-------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <math.h>

int func(int n1, int n2)
{
    int c = 0, i = 0;
    int resto = 0;
    double divdd;
    int div;

    while (resto < n1)
    {
        divdd = pow(10, c);
        div = (int)divdd;
        resto = n1 % div;
        c++;

        if (resto == n2)
        {
            i++;
            printf("Os numeros %d e %d sao correspondentes;", n1, n2);
        }
    }
    if (i == 0)
    {
        printf("Os numeros %d e %d NAO sao correspondentes;", n1, n2);
    }
}

int main(int argc, char const *argv[])
{
    int n1, n2;
    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite um numero: ");
    scanf("%d", &n2);

    func(n1, n2);

    return 0;
}