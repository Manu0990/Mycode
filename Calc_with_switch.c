#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, ch;
    printf("Enter the numbers you want to calculate :\n");
    scanf("%d%d", &a, &b);
    printf("Choose an option :\n1-Summation\n2-Substraction\n3-Multiplication\n4-Division\n");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        printf("The summation is %d", a + b);
        break;
    case 2:
        printf("The substraction is %d", a - b);
        break;
    case 3:
        printf("The multiplication is %d", a * b);
        break;
    case 4:
        printf("The division value is %d", a / b);
        break;
    default:
        printf("Sorry!Option not available!");
    }
    return 0;
}