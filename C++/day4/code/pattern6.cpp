#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        int j;
        for ( j = 1; j <= n-i+1; j++)
        {
            cout<<j<<" ";
        }
        for (; j <= n+i-1; j++)
        {
            cout<<"* ";
        }
        for ( ; j <= n*2; j++)
        {
            
            cout<<n*2-j+1<<" ";
        }
        
        

        cout<<endl;
        
    }
    
    
    return 0;
}