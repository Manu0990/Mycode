#include <stdio.h>
int main(int argc, char const *argv[])
{
    float a, b, c, max1, max2;
    printf("Enter the numbers you want to compare:\n");
    scanf("%f%f%f", &a, &b, &c);

    if (a ==b && b== c)
    {
        printf("Entered numbers are equal.");
    }
    else
    {
        max1 = a > b ? a : b;
        max2 = max1 > c ? max1 : c;
        printf("Largest number is %f", max2);
    }
    return 0;
}