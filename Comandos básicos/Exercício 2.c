# include <stdio.h>

int main()
{
    float money, new;

    printf("Actual earnings: ");
    scanf("%f", &money);

    new = money + (money*10)/100;

    printf("New salary: %f", new);

    return 0;
}
