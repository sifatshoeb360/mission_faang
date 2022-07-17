#include<iostream>
using namespace std;

int sum(int x,int y){

    return x+y;
}

float sum(float x,float y){

    return x+y;
}

int main()
{
    int a=30,b=30;

    float x=3.33,y=6.67;

    cout<<sum(a,b)<<endl;
    cout<<sum(x,y);
    return 0;
}