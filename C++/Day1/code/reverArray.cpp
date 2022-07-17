#include<iostream>
using namespace std;

int i,j;

void reverseArray(int A[],int n){

    for (i = 0,j = n-1; i <n/2 && j>=n/2; i++,j--)
    {
        int temp=A[i];
        A[i]=A[j];
        A[j]=temp;
    }
    
}

void inputArray(int A[],int n){
    for (i = 0; i < n; i++)
    {
        cin>>A[i];
    }
    
}
void printArray(int A[],int n){

    for ( i = 0; i < n; i++)
    {
        cout<<A[i]<<" ";

    }
    cout<<endl;
    
}

int main()
{
    int n,m;
    // input size of array
    cin>>n>>m;
    int arr1[n];
    inputArray(arr1,n);

    int arr2[m];
    inputArray(arr2,m);

    // rever array function call 
    reverseArray(arr1,n);
    reverseArray(arr2,m);

    printArray(arr1,n);
    printArray(arr2,m);


    


    return 0;
}