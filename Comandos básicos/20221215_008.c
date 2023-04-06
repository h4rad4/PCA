// Faça um Programa que peça a temperatura em graus Celsius, transforme e mostre em graus Farenheit.
# include <stdio.h>


int main()
{
    float c, conv;

    printf("C = ");
    scanf("%f", &c);

    conv = (1.8 * c) + 32.0;
    
    printf("%.2f C = %.2f F", c, conv);

    return 0;
}
