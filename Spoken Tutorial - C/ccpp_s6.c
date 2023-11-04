
#include <stdio.h>

int main()
{
    int a, b, sum;
    printf("enter value of a and b \n");
    scanf("%d%d", &a,&b);
    
    sum = a + b;
    printf("sum of a and b is %d\n", sum);

    if (sum>20)
    {
        printf("Sum is greater than 20 \n");
    }
    else if (sum > 10)
    {
        printf("sum greater than 10\n");
    }
    else
    {
        printf("sum is less than 10\n");
    }
    return 0;
}
