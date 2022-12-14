# include <stdio.h>

int main()
{
    float base;
    float height;
    float area;

    printf("Input the base's value: ");
    scanf("%f", &base);

    printf("Input the height's value: ");
    scanf("%f", &height);

    area = (base*height)/2;

    printf("Area = %f", area);

    return 0;
}
