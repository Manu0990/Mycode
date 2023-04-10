#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, i, j, k;
    printf("Enter.\n");

    for (i = 1; i <= 5; i++)
    {

          for (k = 4; k >= i; k--)
          {
              printf(" ");
          }
        for (j = 1; j <= i; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}
