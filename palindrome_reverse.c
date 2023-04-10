#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,n1,m,rev;
    printf("Enter the number you want to check :");
    scanf("%d",&n);
    
    n1=n;
    while(n>0)
    {
        m=n%10;
        rev=rev*10+m;
        n=n/10;
    }
    printf("The reverse is :%d\n",rev);
    if(n1==rev)
    {
        printf("The number is palindrome.");
    }
    else
        printf("The number is not palindrome.");

    return 0;
}
