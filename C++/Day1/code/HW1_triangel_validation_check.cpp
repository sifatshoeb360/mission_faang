#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter three hand of triangle: ";
    int a,b,c;
    cin>>a>>b>>c;
    if (a+b>c || b+c>a || a+c>>b)
    {
        cout<<"Triangle valid";
    }
    else{
        cout<<"Triangle invalid";
    }
    
    return 0;
}