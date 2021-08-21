//Write a program to enter two numbers and perform all arithmetic operations.
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int x, y;
    cout<<"enter first number";
    cin>>x;
    cout<<"enter second number";
    cin>>y;
    int add = x+y;
    int substract = x-y;
    float div = x/y;
    int mult = x*y;
    int mod = x%y;
    cout<<"addition:  "<<add<<endl;
    cout<<"substraction:  "<<substract<<endl;
    cout<<"division:  "<<div<<endl;
    cout<<"multiplication:  "<<mult<<endl;
    cout<<"modulus:  "<<mod<<endl;


    return 0;
}
