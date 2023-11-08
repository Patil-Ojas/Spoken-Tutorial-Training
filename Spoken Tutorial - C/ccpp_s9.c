
#include <stdio.h>

int main()
{
    int a, b;
    float c;
    a = 5;
    b = 2;
    c = a+b;
    printf("sum is %.2f\n", c);
    c = a*b;
    printf("multi is %.2f\n", c);
    c = a/b;
    printf("int div is %.2f\n", c);
    c = (float)a/b;
    printf("real div is %.2f\n", c);
    c = a%b;
    printf("modulus is %.2f\n", c);
    return 0;
}