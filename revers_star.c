#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 3; i >= 1; i--)
    {
        for (k = 3 - i; k>= 1; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        // printf("\n");

        printf("\n");

    }
}