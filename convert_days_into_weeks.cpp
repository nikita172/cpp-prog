// Write a program to convert days into years, weeks and months
# include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int days;
    cout<<"enter number of days";
    cin>>days;
    int months= days/30;
    int month=days%30;
    int weeks= days/7;
    int week = days%7;
    int years= days/365;
    int year=days%365;

    cout<<months << "months and "<<month  << " days"<<endl;
    cout<<weeks << "weeks and "<<week  << " days"<<endl;
    cout<<years << " year and "<<year<<" days"<<endl;

    return 0;
}