
#include <stdio.h>

/*
void add()
{
    int a = 2;
    int b = 3;
    int c = a+b;
    printf("adittion is %d\n", c);
}

void main()
{
    add();
}
*/

int add(int a, int b)
{
    int c = a+b;
}
int main()
{
    int sum; 
    sum = add(5,9);
    printf("addition is %d\n", sum);
    return 0;
}