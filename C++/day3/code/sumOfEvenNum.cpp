#include<iostream>
using namespace std;

int main()
{
    int n,i=2,sum=0;
    cin>>n;
    while (i<=n)
    {
        sum+=i;
        i+=2;
    }
    cout<<sum<<endl;
    sum=0;
    for (int i = 1; i <= n; i++)
    {
        sum+=i;   
    }
    cout<<sum;
    
    

    return 0;
}