#include<iostream>
using namespace std;
/*
          1 
          2 3
          3 4 5
          4 5 6 7
          
          1
          2 1
          3 2 1
          4 3 2 1
*/



int main()
{
    int n;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        for(int j = 1; j<= i ; j++){

            cout<<i+j-1<<" ";
        }
        cout<<endl;
    }
    
    for (int i = 1; i <= n; i++)
    {
        for(int j = 1;j <= i; j++){

            cout<<i-j+1<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}