// unit convertor wint functions and switches...

#include <stdio.h>
float k_m(float n1)
{
    return n1 * 0.6214;
}
float i_f(float n2)
{
    return n2 * 0.0833;
}
float c_i(float n3)
{
    return n3 * 0.3937;
}
float p_k(float n4)
{
    return n4 * 0.4535;
}
float i_m(float n5)
{
    return n5 * 0.0254;
}
void f()
{
    printf("The converted value is :");
}
int main(int argc, char const *argv[])
{
    float n;
    int ch;
    printf("Choose an option to convert :\n1-Kms to Miles.\n2-Inches to Foots.\n3-Cms to Kgs.\n4-Pound to Kgs.\n5-Inches to Metres.\n");
    scanf("%d", &ch);

    printf("Enter the number you want to convert :");
    scanf("%f", &n);

    switch (ch)
    {
    case 1:
        f();
        printf("%f", k_m(n));
        break;
    case 2:
        f();
        printf("%f", i_f(n));
        break;
    case 3:
        f();
        printf("%f", c_i(n));
        break;
    case 4:
        f();
        printf("%f", p_k(n));
        break;
    case 5:
        f();
        printf("%f", i_m(n));
        break;
    default:
        printf("Fuck! Option not available!");
        break;
    }

    return 0;
}