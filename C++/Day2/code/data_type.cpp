#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int myNum = 5;               // Integer (whole number)
    long long int myLongInt = 3330;               // Integer (whole number)
    float myFloatNum = 5.99;     // Floating point number
    double myDoubleNum = 9.98;   // Floating point number
    long  double myLongDouble = 9.98;   // Floating point number
    char myLetter = 'D';         // Character
    bool myBoolean = true;       // Boolean
    string myText = "Hello";     // String

    // cout<<sizeof(myText);

    int arr[]={7,8,9};

    cout<<sizeof(arr)/4<<endl;
    short int sint=4;
    cout<<"size of short int = "<<sizeof(sint)<<endl;

    char ch='A';
    cout<<int(ch);

    cout<<setw(17)<<"WELCOME        TO";
    return 0;
}