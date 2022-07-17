#include<iostream>
using namespace std;

int main()
{
    int n,sum=0,num=1;
    cin>>n;
    while (num<=n)
    {
        sum+=num;
        num++;
    }
    cout<<sum;
    
    return 0;
}