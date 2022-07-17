#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter num for even odd check: ";
    int n;
    cin>>n;
    if (n%2==0)
    {
        cout<<n<<" is even num";
    }
    else{
        cout<<n<<" is odd num";
    }
    
    return 0;
}