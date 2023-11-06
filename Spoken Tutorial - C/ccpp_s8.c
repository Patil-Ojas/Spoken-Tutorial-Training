
// ++a, a++, -a, a--

/*
#include <stdio.h>
int main()
{
    int a = 1;
    printf("a's value is now %d\n", a++);
    printf("a's value is now %d\n", a);
    
    a = 1;
    printf("a's value is now %d\n", ++a);
    printf("a's value is now %d\n", a);

    a = 1;
    printf("a's value is now %d\n", a--);
    printf("a's value is now %d\n", a);

    a = 1;
    printf("a's value is now %d\n", --a);
    printf("a's value is now %d\n", a);
    
    return 0;

}
*/

int main()

{
    int a, b;
    float c;
    a = 5;
    b = 2;
    c = a/b;
    printf("value of c is %.2f\n", c);
    c = (float)a/b;
    printf("Value of c is %.2f\n", c);
    return 0;
}