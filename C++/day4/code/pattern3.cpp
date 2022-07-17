#include<iostream>
using namespace std;


/*
    A A A A 
    B B B B
    C C C C
    D D D D

    A B C D
    A B C D
    A B C D
    A B C D
*/


int main()
{
    int n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<char('A'+i)<<" ";
        }
        cout<<endl;
    }
    

    cout<<endl<<endl<<endl;

    for (int i = 1; i <= n; i++)
    {
        for(int j = 1;j <= n;j++){

            cout<<char('A'+j-1)<<" ";
        }
        cout<<endl;
    }
    
    

    return 0;
}