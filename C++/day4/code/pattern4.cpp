#include<iostream>
using namespace std;

int main()
{

    int n;
    cin>>n;

    /*
       4
       3 4
       2 3 4
       1 2 3 4
    */

    for (int i = 1; i <= n; i++)
    {
        
        for(int j = 1;j <= i;j++){

            cout<<(n-i+j)<<" ";
        }
        cout<<endl;
    }

    cout<<endl<<endl;
    /*
       4
       3 4
       2 3 4
       1 2 3 4
    */
    for (int i = n; i >= 1; i--)
    {
        
        for(int j = 1;j <= n;j++){

            cout<<(i+j-1)<<" ";
        }
        cout<<endl;
    }

    return 0;
}