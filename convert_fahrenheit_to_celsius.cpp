// Write a  program to enter temperature in Fahrenheit and convert to Celsius
# include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    float t;
    cout<<"enter temperature "<<endl;
    cin>>t;
    float c = (t - 32)*(5/9);
    float f = t * 9/5 + 32;
    cout<<"the temperature is in celcius "<<c<<endl;
    cout<<"the temperature is in fahrenheit "<<f<<endl;


    return 0;
}

