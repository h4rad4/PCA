#include <stdio.h>
int main(int argc, char const *argv[])
{
    int hip;

    printf("Digite um numero: ");
    scanf("%i", &hip);

    for (int c1 = 1; c1<= hip; c1++){
        for (int c2 = 1; c2 <= hip; c2++) {
            for (int res = 1; res <= hip; res++) {
                
                if ((c1 * c1) + (c2 * c2) == res * res) {
                    printf("cateto %i e cateto %i: hipotenusa %i\n", c1, c2, res);

                }
            }
        }
    }

    return 0;
}