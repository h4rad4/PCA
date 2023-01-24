/*
-----------------------------------------------------------------------------------------------
Criar e utilizar num programa uma função que receba uma sequência de n números e retorne outra sequência só com os números par 
(o comprimento máximo da sequência é 100 pelo que n tem que ser um número menor que 100)
-----------------------------------------------------------------------------------------------
*/

#include <stdio.h>

int list[100]; 
int i, qt;

void function()
{
    printf("How long is the sequence? ");
    scanf("%i", &qt);

    for (i = 1; i <= qt; i++)
    {
        printf("\nType a number. ");
        scanf("%i", &list[i]);
    }

    printf("\n");

    for (i = qt; i <= qt && i > 0; i--)
    {
        if (list[i] % 2 == 0)
        {
            printf("[%i]", list[i]);
        }
    }

}

int main(int argc, char const *argv[])
{
    function();
    return 0;
}
