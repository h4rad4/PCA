// Faça um Programa que calcule a área de um quadrado, em seguida mostre o dobro desta área para o usuário.
# include <stdio.h>


int main()
{
    float side, result;

    printf("Input the square's side: ");
    scanf("%f", &side);

    result = pow(side, 2) * 2;

    printf("Result = %.2f", result);


    return 0;
}
