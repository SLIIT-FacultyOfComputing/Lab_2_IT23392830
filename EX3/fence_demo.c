
#include <stdio.h>

int main(void)
{
    float perimeter, length, width;

    printf("Enter perimeter: ");
    scanf("%f", &perimeter);

    length = (2 * perimeter) / 7;
    width = (3 * perimeter) / 14;

    printf("Length: %.2f\n", length);
    printf("Width: %.2f\n", width);

    return 0;
}

