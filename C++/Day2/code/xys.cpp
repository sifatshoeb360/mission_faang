#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

    void inputArray(int a[],int n){

         for (int i= 0; i<n; i++) {
        cin>>a[i];
    }
      
}

void printArray(int a[],int n){
    
    for (int i= n-1; i>0; i--) {
        cout<<a[i]<<" ";
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    int arr[n];
    
    inputArray(arr,n);
    printArray(arr, n);
     
    return 0;
}
