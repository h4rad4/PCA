# include <stdio.h>

int main()
{
    float bill, tax;

    printf("Insert the bill's value: ");
    scanf("%f", &bill);

    // Considerando a porcentagem do garçom como 15%:
    tax = (bill * 15) /100;

    printf("Waiter's tax: %f", tax);

    return 0;
}
