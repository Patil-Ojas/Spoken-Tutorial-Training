
#include <iostream>
using namespace std;

/*
int main()
{
    int x, y;
    cout<<"enter no btwn 0 to 39: ";
    cin>>y;

    if (y/10 == 0)
    {
        cout<<"entered no is btwn 0 to 9 \n";
    }
    else if (y/10 == 1)
    {
        cout<<"entered no is btwn 10 and 19 \n";
    }
    else if (y/10 == 2)
    {
        cout<<"entered no is btwn 20 and 29 \n";
    }
    else if (y/10 == 3)
    {
        cout<<"entered no is btwn 30 and 39 \n";
    }
    else
    {
        cout<<"Number is not in range";
    }
    return 0;
}

*/

int main()

{
    int x, y;
    cout<<"enter no btwn 0 to 39: ";
    cin>>y;
    x = y/10;
    switch(x)

    {
        case 0:
        cout<<"entered no is btwn 0 to 9 \n";
        break;

        case 1:
        cout<<"entered no is btwn 10 and 19 \n";
        break;

        case 2:
        cout<<"entered no is btwn 20 and 29 \n";
        break;

        case 3:
        cout<<"entered no is btwn 30 and 39 \n";
        break;

        default:
        cout<<"Number is not in range";
    }
    return 0;

}