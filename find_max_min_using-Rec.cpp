#include<iostream>
using namespace std;
int Max(int arr[], int len, ,int i=0){
    int max;
    if (arr[i]>arr[i+1]) 
        return arr[i];
    else {
        return arr[i+1];
    }

    return Max(arr,i+1,len);
}
//* int Min(int arr[])
int main(int argc, char const *argv[])
{
    int arr[5]={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(int);
    cout<<Max(arr,size);
    return 0;
}
