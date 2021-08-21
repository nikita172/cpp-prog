// Write a  program to enter P, T, R and calculate Compound Interest.

# include<iostream>
# include<math.h>
using namespace std;
int main(int argc, char const *argv[])
{
    float p, r,t;
    cout<<"enter principal"<<endl;
    cin>>p;
    cout<<"enter rate"<<endl;
    cin>>r;
    cout<<"enter time"<<endl;
    cin>>t;
    float CI = p*pow((r/100), t);
    cout<<CI;



    return 0;
}

