# include <stdio.h>

// Faça um Programa que peça as 4 notas bimestrais e mostre a média.

int main()
{
    float n1, n2, n3, n4, media;

    printf("Value 1: ");
    scanf("%f", &n1);

    printf("Value 2: ");
    scanf("%f", &n2);

    printf("Value 3: ");
    scanf("%f", &n3);

    printf("Value 4: ");
    scanf("%f", &n4);

    media = (n1+n2+n3+n4)/4;

    printf("media = %.2f", media);

    return 0;
}
