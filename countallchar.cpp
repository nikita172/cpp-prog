#include<iostream>
#include<string.h>
using namespace std;
int main(int argc, char const *argv[])
{
    char str[100];
    cout <<"enter a string: ";
    cin.getline(str, 100);  
    int count=0;

    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    cout<<"The total number of characters are "<<count<<endl;
    return 0;
}

