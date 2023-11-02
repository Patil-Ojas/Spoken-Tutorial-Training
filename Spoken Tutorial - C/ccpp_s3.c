
/*
range of int- (-32768, 32768)
range of float- (3.4E +/-38)
range of char- (-128, 127)
range of double- (.7E +/-308)
*/

#include <stdio.h>
int main()
{
    int a = 2;
    double const b = 4;
    float c = 1.565;
    char d = 'A';

    printf("value of a is %d\n", a);
    printf("value of b is %lf\n", b);
    printf("value of c is %.2f\n", c);
    printf("value of c is %.3f\n", c);
    printf("value of d is %c\n", d);
    
}
