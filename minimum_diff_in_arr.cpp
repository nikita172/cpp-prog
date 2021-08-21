#include<bits/stdc++.h>
using namespace std;
int minDifference(int* arr, int size){
    sort(arr, arr+size);
    int res=INT_MAX;
    for(int i=1;i<size;i++){
        res = min(res, arr[i]-arr[i-1]);
    }
    return res;
}
int main(int argc, char const *argv[])
{
    int arr[]= {2,1,5,6,3,4};
    int size= sizeof(arr)/sizeof(int);
    cout<<minDifference(arr, size);
    return 0;
}
