#include <stdio.h>

int main()
{
    int i, j, min, max;
    printf("Enter the min and max value: ");
    scanf("%d%d", &min, &max);
    for (i = min; i <= max; i++)
    {
        for (j = 2; j < i; j++)

            if (i % j == 0)
            break;

        if (i == j)

            printf("%d ", j);
    }
    return 0;
}