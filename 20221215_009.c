# include <stdio.h>

/*
Faça um Programa que peça 2 números inteiros e um número real. 
Calcule e mostre: o produto do dobro do primeiro com metade do segundo.
A soma do triplo do primeiro com o terceiro. O terceiro elevado ao cubo.
*/ 

int main()
{
    int int1, int2, op1;
    float int3, op2, op3;

    printf("Input the int1: ");
    scanf("%i", &int1);

    printf("Input the int2: ");
    scanf("%i", &int2);

    printf("Input the int3 n.: ");
    scanf("%f", &int3);

    op1 = (2*int1) * (int2/2);
    op2 = (3*int1) + (int3);
    op3 = pow(int3, 3);

    printf("OP 1 = %i \n", op1);
    printf("OP 2 = %f \n", op2);
    printf("OP 3 = %f \n", op3);
   
    return 0;
}