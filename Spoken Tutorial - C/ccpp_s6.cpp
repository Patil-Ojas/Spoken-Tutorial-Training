#include <iostream>
using namespace std;

int main()
{
    int a, b, sum;
    cout<<"enter value for a and b \n";
    cin>>a>>b;
    sum = a + b;
    cout<<"sum of a and b is "<<sum<<"\n";

    if (sum>20)
    {
        cout<<"Sum is greater than 20 \n";
    }
    else if (sum > 10)
    {
        cout<<"Sum is greater than 10 \n";
    }
    else
    {
        cout<<"Sum is lesser than 10 \n";
    }
    return 0;
}