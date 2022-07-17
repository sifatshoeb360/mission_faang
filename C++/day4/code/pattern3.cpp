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

    A B C D
    E F G H
    I J K L
    M N O P


    A B C D
    B C D E
    C D E F
    D E F G

    



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

    cout<<endl<<endl<<endl;
    char ch='A';
    for (int i = 1; i <= n; i++)
    {
        for(int j = 1;j <= n;j++){

            cout<<ch++<<" ";
        }
        cout<<endl;
    }

    cout<<endl<<endl<<endl;

    
    for (int i = 1; i <= n; i++)
    {
        
        for(int j = 1;j <= n;j++){

            cout<<char('A'+i-2+j)<<" ";
        }
        cout<<endl;
    }


    
    cout<<endl<<endl<<endl;
    /*
        A
        B C
        C D E
        D E F G
    */

    for (int i = 1; i <= n; i++)
    {
        
        for(int j = 1;j <= i;j++){

            cout<<char('A'+i-2+j)<<" ";
        }
        cout<<endl;
    }


    cout<<endl<<endl<<endl;
    /*
        D
        C D
        B C D
        A B C D
    */

    for (int i = 1; i <= n; i++)
    {
        
        for(int j = 1;j <= i;j++){

            cout<<char('A'+n-i+j-1)<<" ";
        }
        cout<<endl;
    }

    cout<<endl<<endl<<endl;
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

    return 0;
}