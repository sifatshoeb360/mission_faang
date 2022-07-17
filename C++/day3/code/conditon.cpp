#include<iostream>

using namespace std;

int main(){

    int n=20;
    int z=30;

    if (n>z)
    {
        cout<<"n is big";
    }
    else if (z==n)
    {
        cout<<"z = n";
    }
    else
    {
        cout<<"z is big";
    }

    cout<<endl;

    int num1=50;
    int num2=80;
    cout<<(num2>num1 ? "num2 is bigger than num1":"num1 is bigger than num2");

    
    
    
    
    
    return 0;
}