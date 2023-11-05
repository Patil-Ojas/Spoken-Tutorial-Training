
#include <stdio.h>

/*
int main()
{
    int x, y;
    printf("enter no btwn 0 to 39: ");
    scanf("%d", &y);

    if (y/10 == 0)
    {
        printf("entered no is btwn 0 to 9 \n");
    }
    else if (y/10 == 1)
    {
        printf("entered no is btwn 10 and 19 \n");
    }
    else if (y/10 == 2)
    {
        printf("entered no is btwn 20 and 29 \n");
    }
    else if (y/10 == 3)
    {
        printf("entered no is btwn 30 and 39 \n");
    }
    else
    {
        printf("Number is not in range");
    }
    return 0;
}
*/

int main()
{
    int x, y;
    printf("enter no btwn 0 and 39: ");
    scanf("%d", &y);
    x = y/10;
    switch(x)
    {
        case 0:
        printf("entered no is btwn 0 to 9 \n");
        break;

        case 1:
        printf("entered no is btwn 10 and 19 \n");
        break;

        case 2:
        printf("entered no is btwn 20 and 29 \n");
        break;

        case 3:
        printf("entered no is btwn 30 and 39 \n");
        break;

        default:
        printf("Number is not in range");
    }
    return 0;
}