//WAP in C to find the nth term of fibonacci series...

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int f1=0,f2=1,i,n=5,next;
    printf("Enter the wanted term number of the series :");
    scanf("%d",&n);
    
    for(i=1; i<=n; i++)
    {
        printf("%d, ",f1);
        next=f1+f2;
        f1=f2;
        f2=next;
    }
    printf("\n\nThe %dth term is :%d",n,next-f1);
    return 0;
}
