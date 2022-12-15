# include <stdio.h>

/*
Faça um Programa que peça a temperatura em graus Farenheit, transforme e mostre a temperatura em graus Celsius. 
C = (5 * (F-32) / 9).
*/

int main()
{
    float f, conv;

    printf("F = ");
    scanf("%f", &f);

    conv = 5*(f-32) / 9;
    
    printf("%f F = %.2f C", f, conv);

    return 0;
}
