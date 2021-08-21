// Write a program to enter marks of five subjects and calculate total, average and percentage
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    float a, b, x, y, z;
    cout<<"enter marks of english"<<endl;
    cin>>x;
    cout<<"enter marks of hindi"<<endl;
    cin>>y;
    cout<<"enter marks of maths"<<endl;
    cin>>z;
    cout<<"enter marks of social studies"<<endl;
    cin>>a;
    cout<<"enter marks of science"<<endl;
    cin>>b;
    float total=(a+b+x+y+z);
    float percentage =(a+b+x+y+z)/5;
    float average =(a+b+x+y+z)/5;
    cout<<total<<" is the total marks"<<endl;
    cout<<percentage<<"% is the total percentage"<<endl;
    cout<<average<<" is the total average"<<endl;

    return 0;
}

