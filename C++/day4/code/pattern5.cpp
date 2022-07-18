#include<iostream>
using namespace std;

int main()
{
    /*
              1
            1 2 1
          1 2 3 2 1
        1 2 3 4 3 2 1
    */
    

    int n;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        int j=1;
        int k=j;
        for ( ; j < n-i+1; j++)
        {
            cout<<"  ";
        }
        
        for (; j <=n; j++)
        {
            cout<<k++<<" ";
            
        }
        k=i-1;
        for ( ; j <=n+i-1; j++)
        {
            cout<<k--<<" ";
        }
        
        cout<<endl;
        
    }

    cout<<endl<<endl;
    /*
              1
            2 1 2 
          3 2 1 2 3
        4 3 2 1 2 3 4
    */


    for (int i = 1; i <= n; i++)
    {
        int j=1;
        int k=i;
        for ( j = 1 ; j < n-i+1; j++)
        {
            cout<<"  ";
        }
        
        for (; j <=n; j++)
        {
            cout<<k--<<" ";
            
        }
        ++k;
        for ( ; j <=n+i-1; j++)
        {
            cout<<++k<<" ";
        }
        
        cout<<endl;
        
    }

    



    return 0;
}