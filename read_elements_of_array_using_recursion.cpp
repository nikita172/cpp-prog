#include<iostream>
using namespace std;

int recurse(int arr[],int n,int len){
    if(n>=len) return 0  ;
    cout<<arr[n];
    recurse(arr,n+1,len);
    return 0;
    
}
int main(int argc, char const *argv[])
{
    int arr[5]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(int);
    recurse(arr,0,size);

    return 0;
}
