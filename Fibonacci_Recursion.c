#include<stdio.h>
float fib(float n)
{
    // printf("%d",f1);
    // next=f1+f2;
    // f2=next;
    // f1=f2;
    return n*(n-1);
}


int main(int argc, char const *argv[])
{
    
    float n,a;
    printf("Enter the wanted term number of the series :");
    scanf("%f",&n);
    a=fib(n);
    printf("%d",fib(n));


    return 0;
}
