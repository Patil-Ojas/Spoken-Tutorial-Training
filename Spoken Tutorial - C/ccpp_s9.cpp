#include <iostream>
using namespace std;

int main()
{
    int a, b;
    float c;
    a = 5;
    b = 2;
    c = a+b;
    cout<<"sum is "<<c<<"\n";
    c = a*b;
    cout<<"multi is "<<c<<"\n";
    c = a/b;
    cout<<"int div is "<<c<<"\n";
    c = (float)a/b;
    cout<<"real div is "<<c<<"\n";
    c = a%b;
    cout<<"modulus is "<<c<<"\n";
    return 0;

}