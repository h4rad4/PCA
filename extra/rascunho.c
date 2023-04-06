#include <stdio.h>

void function(int *array, int *maior, int *menor, int qt)
{
    int zero = 0;
    int *soma = &zero;

    printf("%d ", *soma);

    for (int i = 0; i < qt; i++)
    {
        *soma += *(array + i);
    }
    printf("%d", *soma);
}

int main()
{
    int array[100];
    int qt;
    int *p, *maior, *menor;

    printf("Insira o tamanho: ");
    scanf("%d", &qt);

    for (p = &array; p < array + qt; p++)
    {
        printf("insira um numero: ");
        scanf("%d", p);
    }
    function(&array, &maior, &menor, qt);
}