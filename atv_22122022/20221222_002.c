#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, big, sma;

    for (int c = 1; c < 16; c++) {
        printf("Enter a number: ");
        scanf("%i", &num);

        if (c == 1) {
            big = sma = num;
        } else if (num > big) {
            big = num;
        } else if (num < sma) {
            sma = num;
        }
    }
    printf("Greatest Number: %i\n", big);
    printf("Tiniest number: %i\n", sma);
    return 0;
}