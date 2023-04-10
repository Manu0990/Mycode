//With argument and with return value.

#include<stdio.h>
int sum(int a, int b)
{return a+b;}
int mul(int a,int b)
{return a*b;}
int main(int argc, char const *argv[])
{
    int a=5,b=5,c,d;
    d=sum(a,b);
    c=mul(a,b);
    printf("The sum of a & b is %d\n",d);
    printf("The mul of a & b is %d",c);
    return 0;
}
