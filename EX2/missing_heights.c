
#include <stdio.h>

int main(void)
{
    float h1, h2, h3, avg;
    float missing1, missing2;

    printf("Enter three known heights: ");
    scanf("%f %f %f", &h1, &h2, &h3);

    printf("Enter average height: ");
    scanf("%f", &avg);

    missing1 = (5 * avg - h1 - h2 - h3) / 2;
    missing2 = missing1;

    printf("Missing height 1: %.2f\n", missing1);
    printf("Missing height 2: %.2f\n", missing2);

    return 0;
}

