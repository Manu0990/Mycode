#include <stdio.h>
float calc(float a, char o)
{
    float d = 0;
    do
    {
        scanf("%f%c", &a, &o);
        if (o == '+')
        {
            d = d + a;
        }
        else if (o == '-')
        {
            d = a - d;
        }
        else if (o == '/' || o == '*')
        {
            d = 1;

            if (o == '/')
            {
                d = a / d;
            }
            else if (o == '*')
            {
                d = d * a;
            }
        }

    } while (o != '=');
    if (o == '=')
    {
        printf("%f", d);
    }
    return d;
}

int main(int argc, char const *argv[])
{
    int a, b;
    char o;
    printf("Enter values :\n");
    calc(a, o);
    return 0;
}
