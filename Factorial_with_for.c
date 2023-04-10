#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,i,fact=1;
    printf("Enter the number you want the factorial :");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        fact=fact*i;
    }
     printf("The factorial of %d is %d",a,fact);
    return 0;
}
