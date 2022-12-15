# include <stdio.h>

// Faça um Programa que peça o raio de um círculo, calcule e mostre sua área.

int main()
{
    float radius, area;

    printf("Input the radius: ");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;

    printf("area = %.2f", area);

    return 0;
}
