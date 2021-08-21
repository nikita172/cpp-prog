#include<iostream>
using namespace std;
int sumElements(int arr[],int i, int len){
    if(i>=len) return 0;
    return (arr[i]+ sumElements(arr,i+1,len));
    
}
int main(int argc, char const *argv[])
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(int);
    cout<<sumElements(arr,0,size);
    return 0;
}
