#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, soma = 0, resto;

    printf("Entre com o valor 'n': ");
    scanf("%i", &n);

    for (int i = 1; i < n; i++)
    {
        resto = n % i;

        if (resto == 0)
        {
            soma += i;
        }
    }

    if (soma == n)
    {
        printf("%i is a perfect number.", n);
    }
    else
    {
        printf("%i is not a perfect number.", n);
    }
    return 0;
}