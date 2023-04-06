// Dado um número identificar se é um número primo. (Um número primo é aquele que é dividido apenas por um e por ele mesmo.)

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, pr;
    while (num != 0)
    {
        printf("Digite 0 para finalizar\n");
        printf("Insira um numero: ");
        scanf("%i", &num);

        if (num != 0 && num != 2 && num % 2 != 0)
        {
            pr = num;
            printf("Esse é um numero primo!\n");
        }
        else if (num == 2)
        {
            pr = num;
            printf("Esse é um numero primo!\n");
        }
        
    }

    return 0;
}