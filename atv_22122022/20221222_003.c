#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num = 0, odd = 0, even = 0;
    printf("Type 1000 to stop\n");

    while (num < 1000) {
        printf("Enter a number:  ");
        scanf("%i", &num);

        if (num % 2 == 0 && num < 1000) {
            even += num;
        }
        if (num % 2 != 0 && num < 1000) {
            odd += num;
        }
    }

    printf("Addittion of odd numbers: %i\n", odd);
    printf("Addittion of even numbers: %i\n", even);
    return 0;
}