#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, i, f = 0;
    printf("Enter the number you want to check :");
    scanf("%d", &n);
    for (i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
            printf("Not Prime.");
        break;
        f = 1;
    }
    if (f == 0)
    {
        printf("Prime.");
    }
    return 0;
}
