#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,space,rows,j;
    printf("Enter the rows you want to print :\n");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(space=rows-1;space>=i;space--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(i=rows-1;i>=1;i--)
    {
        for(space=rows-i;space>=1;space--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
    printf("\n");
    }

    return 0;
}
